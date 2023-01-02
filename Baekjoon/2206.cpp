#include<iostream>
#include<string>
#include<queue>
#include<tuple>
using namespace std;

int n, m;
int graph[2][1001][1001];
queue<tuple<int,int,int>> visitQ;

void bfs()
{
	while (!visitQ.empty())
	{
		tuple<int, int, int> temp = visitQ.front();
		visitQ.pop();
		int isBreak = get<0>(temp);
		int x = get<1>(temp);
		int y = get<2>(temp);

		if (x == n && y == m)
			break;

		if (x - 1 >= 1)
		{
			if (graph[isBreak][x - 1][y] == 0)
			{
				graph[isBreak][x - 1][y] = graph[isBreak][x][y] + 1;
				visitQ.push({ isBreak,x - 1,y });
			}
			else if (isBreak == 0 && graph[isBreak][x - 1][y] == -1)
			{
				graph[1][x - 1][y] = graph[isBreak][x][y] + 1;
				visitQ.push({ 1, x - 1,y });
			}
		}
		if (x + 1 <= n)
		{
			if (graph[isBreak][x + 1][y] == 0)
			{
				graph[isBreak][x + 1][y] = graph[isBreak][x][y] + 1;
				visitQ.push({ isBreak,x + 1,y });
			}
			else if (isBreak == 0 && graph[isBreak][x + 1][y] == -1)
			{
				graph[1][x + 1][y] = graph[isBreak][x][y] + 1;
				visitQ.push({ 1, x + 1,y });
			}
		}
		if (y - 1 >= 1)
		{
			if (graph[isBreak][x][y - 1] == 0)
			{
				graph[isBreak][x][y - 1] = graph[isBreak][x][y] + 1;
				visitQ.push({ isBreak,x,y - 1 });
			}
			else if (isBreak == 0 && graph[isBreak][x][y - 1] == -1)
			{
				graph[1][x][y - 1] = graph[isBreak][x][y] + 1;
				visitQ.push({ 1, x, y - 1});
			}
		}
		if (y + 1 <= m)
		{
			if (graph[isBreak][x][y + 1] == 0)
			{
				graph[isBreak][x][y + 1] = graph[isBreak][x][y] + 1;
				visitQ.push({ isBreak, x, y + 1 });
			}
			else if (isBreak == 0 && graph[isBreak][x][y + 1] == -1)
			{
				graph[1][x][y + 1] = graph[isBreak][x][y] + 1;
				visitQ.push({ 1, x, y + 1 });
			}
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
		string str;
		cin >> str;
		for (int j = 1; j <= m; j++)
		{
			graph[0][i][j] = str[j - 1] - '0';
			if (graph[0][i][j] == 1)
				graph[0][i][j] = -1;
			graph[1][i][j] = graph[0][i][j];
		}
	}
	visitQ.push({ 0, 1, 1 });

	bfs();
	
	if (graph[0][n][m] == 0 && graph[1][n][m] == 0)
	{
		if (n == 1 && m == 1)
			cout << 1;
		else
			cout << -1;
	}
	else
	{
		if (graph[0][n][m] > graph[1][n][m])
			cout << graph[0][n][m] + 1;
		else
			cout << graph[1][n][m] + 1;
	}
}