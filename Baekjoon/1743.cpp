#include<iostream>
#include<queue>
using namespace std;

int graph[101][101];
int n, m, k, cnt;
bool visit[101][101];
queue<pair<int, int>> visitQ;

void bfs(int x, int y)
{
	cnt++;
	visit[x][y] = true;
	visitQ.push({ x,y });

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first + 1 <= n && graph[temp.first + 1][temp.second] == 1 && !visit[temp.first + 1][temp.second])
		{
			visitQ.push({ temp.first + 1, temp.second });
			visit[temp.first + 1][temp.second] = true;
			cnt++;
		}
		if (temp.first - 1 > 0 && graph[temp.first - 1][temp.second] == 1 && !visit[temp.first - 1][temp.second])
		{
			visitQ.push({ temp.first - 1, temp.second });
			visit[temp.first - 1][temp.second] = true;
			cnt++;
		}
		if (temp.second + 1 <= m && graph[temp.first][temp.second + 1] == 1 && !visit[temp.first][temp.second + 1])
		{
			visitQ.push({ temp.first, temp.second + 1});
			visit[temp.first][temp.second + 1] = true;
			cnt++;
		}
		if (temp.second - 1 > 0 && graph[temp.first][temp.second - 1] == 1 && !visit[temp.first][temp.second - 1])
		{
			visitQ.push({ temp.first, temp.second - 1 });
			visit[temp.first][temp.second - 1] = true;
			cnt++;
		}

	}
}

int main()
{
	int max = -1;
	cin >> n >> m >> k;

	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		graph[x][y] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (graph[i][j] == 1 && !visit[i][j])
			{
				bfs(i, j);

				if (max < cnt)
					max = cnt;
				cnt = 0;
			}
		}
	}

	cout << max;
}