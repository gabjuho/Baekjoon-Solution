#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int n, m;
int graph[50][50];
int visit[50][50];
queue<pair<int,int>> visitQ;

void bfs(int x,int y)
{
	visit[x][y] = 1;
	visitQ.push({ x,y });

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first + 1 < n && visit[temp.first + 1][temp.second] == 0)
		{
			visitQ.push({ temp.first + 1, temp.second });
			visit[temp.first + 1][temp.second] = visit[temp.first][temp.second] + 1;
		}
		if (temp.first - 1 >= 0 && visit[temp.first - 1][temp.second] == 0)
		{
			visitQ.push({ temp.first - 1, temp.second });
			visit[temp.first - 1][temp.second] = visit[temp.first][temp.second] + 1;
		}
		if (temp.second + 1 < m && visit[temp.first][temp.second + 1] == 0)
		{
			visitQ.push({ temp.first, temp.second + 1 });
			visit[temp.first][temp.second + 1] = visit[temp.first][temp.second] + 1;
		}
		if (temp.second - 1 >= 0 && visit[temp.first][temp.second - 1] == 0)
		{
			visitQ.push({ temp.first, temp.second - 1});
			visit[temp.first][temp.second - 1] = visit[temp.first][temp.second] + 1;
		}
		if (temp.first + 1 < n && temp.second + 1 < m && visit[temp.first + 1][temp.second + 1] == 0)
		{
			visitQ.push({ temp.first + 1, temp.second + 1});
			visit[temp.first + 1][temp.second + 1] = visit[temp.first][temp.second] + 1;
		}
		if (temp.first - 1 >= 0 && temp.second + 1 < m && visit[temp.first - 1][temp.second + 1] == 0)
		{
			visitQ.push({ temp.first - 1, temp.second + 1});
			visit[temp.first - 1][temp.second + 1] = visit[temp.first][temp.second] + 1;
		}
		if (temp.first + 1 < n && temp.second - 1 >= 0 && visit[temp.first + 1][temp.second - 1] == 0)
		{
			visitQ.push({ temp.first + 1, temp.second - 1 });
			visit[temp.first + 1][temp.second - 1] = visit[temp.first][temp.second] + 1;
		}
		if (temp.first - 1 >= 0 && temp.second - 1 >= 0 && visit[temp.first - 1][temp.second - 1] == 0)
		{
			visitQ.push({ temp.first - 1, temp.second - 1 });
			visit[temp.first - 1][temp.second - 1] = visit[temp.first][temp.second] + 1;
		}
	}
}

int main()
{
	int max = -1;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> graph[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (graph[i][j] == 1)
			{
				bfs(i, j);
				if (max < temp)
					max = temp;
			}

			memset(visit, 0, sizeof(visit));
		}
	}

	cout << max - 1;
}