#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int n, m, blue, white, cnt;
char graph[100][100];
bool visit[100][100];
queue<pair<int,int>> visitQ;

void bfs(int x, int y, char color)
{
	visitQ.push({ x,y });
	visit[x][y] = true;
	cnt++;

	while (!visitQ.empty())
	{
		pair<int,int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first + 1 < m && graph[temp.first + 1][temp.second] == color && !visit[temp.first+1][temp.second])
		{
			visitQ.push({ temp.first + 1,temp.second });
			visit[temp.first + 1][temp.second] = true;
			cnt++;
		}
		if (temp.first - 1 >= 0 && graph[temp.first - 1][temp.second] == color && !visit[temp.first - 1][temp.second])
		{
			visitQ.push({ temp.first - 1,temp.second });
			visit[temp.first - 1][temp.second] = true;
			cnt++;
		}
		if (temp.second + 1 < n && graph[temp.first][temp.second + 1] == color && !visit[temp.first][temp.second + 1])
		{
			visitQ.push({ temp.first,temp.second + 1 });
			visit[temp.first][temp.second + 1] = true;
			cnt++;
		}
		if (temp.second - 1 >= 0 && graph[temp.first][temp.second - 1] == color && !visit[temp.first][temp.second - 1])
		{
			visitQ.push({ temp.first,temp.second - 1 });
			visit[temp.first][temp.second - 1] = true;
			cnt++;
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> graph[i][j];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(!visit[i][j])
				bfs(i, j, graph[i][j]);

			if (graph[i][j] == 'W')
				white += cnt * cnt;
			else
				blue += cnt * cnt;

			cnt = 0;
		}
	}
	cout << white << ' ' << blue;
}