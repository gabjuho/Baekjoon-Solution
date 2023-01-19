#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int n;
int graph[100][100];
bool visit[100];
queue<int> visitQ;

int bfs(int start, int end)
{
	visitQ.push(start);

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (int i = 0; i < n; i++)
		{
			if (graph[temp][i] == 1 && !visit[i])
			{
				if (i == end)
					return 1;
				visitQ.push(i);
				visit[i] = true;
			}
		}
	}

	return 0;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> graph[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << bfs(i, j) << ' ';

			while (!visitQ.empty())
				visitQ.pop();

			memset(visit, false, sizeof(visit));
		}
		cout << '\n';
	}
}