#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

char graph[50][50];
int n, cnt;
int visit[50];
queue<int> visitQ;

void bfs(int index)
{
	visitQ.push(index);
	visit[index] = 1;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();
		
		if (visit[temp] == 3)
			continue;

		for (int i = 0; i < n; i++)
		{
			if (graph[temp][i] == 'Y' && visit[i] == 0)
			{
				visitQ.push(i);
				visit[i] = visit[temp] + 1;
				cnt++;
			}
		}
	}
}

int main()
{
	int max = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> graph[i];

	for (int i = 0; i < n; i++)
	{
		bfs(i);
		if (cnt > max)
			max = cnt;
		cnt = 0;
		memset(visit, 0, sizeof(visit));
	}

	cout << max;
}