#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

char graph[100][100];
bool visit[100][100];
queue<pair<int, int>> visitQ;
int cnt, n;

void bfs(int x, int y)
{
	char color = graph[x][y];
	visit[x][y] = true;
	visitQ.push({ x,y });

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first + 1 < n && graph[temp.first + 1][temp.second] == color && !visit[temp.first + 1][temp.second])
		{
			visit[temp.first + 1][temp.second] = true;
			visitQ.push({ temp.first + 1, temp.second });
		}
		if (temp.first - 1 >= 0 && graph[temp.first - 1][temp.second] == color && !visit[temp.first - 1][temp.second])
		{
			visit[temp.first - 1][temp.second] = true;
			visitQ.push({ temp.first - 1, temp.second });
		}
		if (temp.second + 1 < n && graph[temp.first][temp.second + 1] == color && !visit[temp.first][temp.second + 1])
		{
			visit[temp.first][temp.second + 1] = true;
			visitQ.push({ temp.first, temp.second + 1 });
		}
		if (temp.second - 1 >= 0 && graph[temp.first][temp.second - 1] == color && !visit[temp.first][temp.second - 1])
		{
			visit[temp.first][temp.second - 1] = true;
			visitQ.push({ temp.first, temp.second - 1 });
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> graph[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visit[i][j])
			{
				bfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << ' ';

	cnt = 0;
	memset(visit, false, sizeof(visit));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (graph[i][j] == 'G')
				graph[i][j] = 'R';

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visit[i][j])
			{
				bfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;
}