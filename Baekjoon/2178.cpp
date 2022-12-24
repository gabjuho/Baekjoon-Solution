#include<iostream>
#include<queue>
using namespace std;

char graph[101][101];
int distance[101][101];
queue<pair<int,int>> visitQ;
bool visit[101][101];
int n, m;
int count;

void bfs(int x, int y)
{
	visit[x][y] = true;

	visitQ.push({ x,y });

	::distance[x][y] = 1;

	while (!visitQ.empty())
	{
		int x = visitQ.front().first;
		int y = visitQ.front().second;

		visitQ.pop();
		
		if (x + 1 <= n && graph[x + 1][y] && !visit[x + 1][y])
		{
			visit[x + 1][y] = true;
			visitQ.push({ x + 1,y });
			::distance[x + 1][y] = ::distance[x][y] + 1;
		}
		if (y + 1 <= m && graph[x][y + 1] && !visit[x][y + 1])
		{
			visit[x][y + 1] = true;
			visitQ.push({ x, y + 1 });
			::distance[x][y + 1] = ::distance[x][y] + 1;
		}
		if (x - 1 >= 1 && graph[x - 1][y] && !visit[x - 1][y])
		{
			visit[x - 1][y] = true;
			visitQ.push({ x - 1,y });
			::distance[x - 1][y] = ::distance[x][y] + 1;
		}
		if (y - 1 >= 1 && graph[x][y - 1] && !visit[x][y - 1])
		{
			visit[x][y - 1] = true;
			visitQ.push({ x, y - 1 });
			::distance[x][y - 1] = ::distance[x][y] + 1;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> graph[i][j];
			graph[i][j] -= '0';
		}
	}

	bfs(1, 1);

	cout << ::distance[n][m];
}