#include<iostream>
#include<queue>
using namespace std;

queue<int> visitQ;
int graph[1001];
int visit[1001];
int n;

void bfs(int index)
{
	visitQ.push(index);
	visit[index] = 1;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (int i = 1; i <= graph[temp]; i++)
		{
			if (temp + i <= n && visit[temp + i] == 0)
			{
				visitQ.push(temp + i);
				visit[temp + i] = visit[temp] + 1;
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> graph[i];
	}

	bfs(1);

	if (visit[n] == 0)
		cout << -1;
	else
		cout << visit[n] - 1;
}