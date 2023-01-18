#include<iostream>
#include<queue>
using namespace std;

int n, m, cnt;
int graph[500][500];
bool visit[500][500];
queue<pair<int,int>> visitQ;

void bfs(int x, int y)
{
	visit[x][y] = true;
	visitQ.push({ x,y });
	cnt++;

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first + 1 < n && graph[temp.first + 1][temp.second] == 1 && !visit[temp.first + 1][temp.second])
		{
			visitQ.push({ temp.first + 1, temp.second });
			visit[temp.first + 1][temp.second] = true;
			cnt++;
		}
		if (temp.first - 1 >= 0 && graph[temp.first - 1][temp.second] == 1 && !visit[temp.first - 1][temp.second])
		{
			visitQ.push({ temp.first - 1, temp.second });
			visit[temp.first - 1][temp.second] = true;
			cnt++;
		}
		if (temp.second + 1 < m && graph[temp.first][temp.second + 1] == 1 && !visit[temp.first][temp.second + 1])
		{
			visitQ.push({ temp.first, temp.second + 1});
			visit[temp.first][temp.second + 1] = true;
			cnt++;
		}
		if (temp.second - 1 >= 0 && graph[temp.first][temp.second - 1] == 1 && !visit[temp.first][temp.second - 1])
		{
			visitQ.push({ temp.first, temp.second - 1 });
			visit[temp.first][temp.second - 1] = true;
			cnt++;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int max = -1, pictureCnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> graph[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (graph[i][j] == 1 && !visit[i][j])
			{
				pictureCnt++;
				bfs(i, j);
			}

			if (max < cnt)
				max = cnt;

			cnt = 0;
		}
	}

	cout << pictureCnt << '\n';
	cout << max;
}