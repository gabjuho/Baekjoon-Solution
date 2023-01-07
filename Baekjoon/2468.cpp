#include<iostream>
#include<memory.h>
using namespace std;

int n, cnt;
int graph[100][100];
bool visit[100][100];

void dfs(pair<int,int> pos, int height)
{
	visit[pos.first][pos.second] = true;

	if (pos.first - 1 >= 0 && graph[pos.first - 1][pos.second] >= height && !visit[pos.first - 1][pos.second])
		dfs({ pos.first - 1, pos.second }, height);
	if (pos.first + 1 < n && graph[pos.first + 1][pos.second] >= height && !visit[pos.first + 1][pos.second])
		dfs({ pos.first + 1, pos.second }, height);
	if (pos.second - 1 >= 0 && graph[pos.first][pos.second - 1] >= height && !visit[pos.first][pos.second - 1])
		dfs({ pos.first, pos.second - 1 }, height);
	if (pos.second + 1 < n && graph[pos.first][pos.second + 1] >= height && !visit[pos.first][pos.second + 1])
		dfs({ pos.first, pos.second + 1 }, height);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int maxHeight = -1, maxReigion = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> graph[i][j];
			if (maxHeight < graph[i][j])
				maxHeight = graph[i][j];
		}
	}

	for (int h = 0; h <= maxHeight; h++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (graph[i][j] >= h && !visit[i][j])
				{
					cnt++;
					dfs({ i,j }, h);
				}
			}
		}
		if (maxReigion < cnt)
			maxReigion = cnt;

		memset(visit, false, sizeof(visit));
		cnt = 0;
	}

	cout << maxReigion;
}