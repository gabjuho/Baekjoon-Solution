#include<iostream>
#include<queue>
using namespace std;

int m, n;
int graph[1000][1000];
queue<pair<int,int>> visitQ;

void bfs()
{
	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();
		
		if (temp.first - 1 >= 0 && graph[temp.first - 1][temp.second] == 0)
		{
			graph[temp.first - 1][temp.second] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first - 1, temp.second });
		}
		if (temp.first + 1 < n && graph[temp.first + 1][temp.second] == 0)
		{
			graph[temp.first + 1][temp.second] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first + 1, temp.second });
		}
		if (temp.second - 1 >= 0 && graph[temp.first][temp.second - 1] == 0)
		{
			graph[temp.first][temp.second - 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first, temp.second - 1});
		}
		if (temp.second + 1 < m && graph[temp.first][temp.second + 1] == 0)
		{
			graph[temp.first][temp.second + 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first, temp.second + 1 });
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	bool isAllRipe = true, isCantRipe = false;
	int max = -1;
	cin >> m >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> graph[i][j];
			if (graph[i][j] == 1)
			{
				visitQ.push({ i,j });
				isCantRipe = true;
			}
			else if (graph[i][j] == 0)
				isAllRipe = false;
		}
	}

	if (!isCantRipe)
	{
		cout << -1;
		return 0;
	}

	bfs();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < graph[i][j])
				max = graph[i][j];
			if (graph[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
		}
	}
	
	if (!isAllRipe)
		cout << max - 1;
	else
		cout << 0;
}