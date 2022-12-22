#include<iostream>
#include<memory.h>
using namespace std;

int n, m, k;
int graph[50][50];
bool visit[50][50];
int count;

void dfs(int x, int y)
{
	visit[x][y] = true;

	if (x + 1 < n && graph[x + 1][y] && !visit[x + 1][y])
		dfs(x + 1, y);
	if (x - 1 >= 0 && graph[x - 1][y] && !visit[x - 1][y])
		dfs(x - 1, y);
	if (y + 1 < m && graph[x][y + 1] && !visit[x][y + 1])
		dfs(x, y + 1);
	if (y - 1 >= 0 && graph[x][y - 1] && !visit[x][y - 1])
		dfs(x, y - 1);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m >> k;

		for (int j = 0; j < k; j++)
		{
			int x, y;
			cin >> x >> y;

			graph[x][y] = 1;
		}

		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				if (graph[j][l] && !visit[j][l])
				{
					dfs(j, l);
					::count++;
				}
			}
		}

		cout << ::count << '\n';
		::count = 0;

		for (int j = 0; j < n; j++)
			memset(graph[j], 0, sizeof(graph[j]));

		for (int j = 0; j < n; j++)
			memset(visit[j], false, sizeof(visit[j]));
	}
}