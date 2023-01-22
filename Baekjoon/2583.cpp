#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int m, n, k, s, cnt;
int graph[100][100];
bool visit[100][100];
vector<int> square;
queue<pair<int, int>> visitQ;

void bfs(int x,int y)
{
	visit[x][y] = true;
	visitQ.push({ x,y });
	s++;

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();
		
		if (temp.first + 1 < m && graph[temp.first + 1][temp.second] == 0 && !visit[temp.first + 1][temp.second])
		{
			visitQ.push({ temp.first + 1, temp.second });
			visit[temp.first + 1][temp.second] = true;
			s++;
		}
		if (temp.first - 1 >= 0 && graph[temp.first - 1][temp.second] == 0 && !visit[temp.first - 1][temp.second])
		{
			visitQ.push({ temp.first - 1, temp.second });
			visit[temp.first - 1][temp.second] = true;
			s++;
		}
		if (temp.second + 1 < n && graph[temp.first][temp.second + 1] == 0 && !visit[temp.first][temp.second + 1])
		{
			visitQ.push({ temp.first, temp.second + 1});
			visit[temp.first][temp.second + 1] = true;
			s++;
		}
		if (temp.second - 1 >= 0 && graph[temp.first][temp.second - 1] == 0 && !visit[temp.first][temp.second - 1])
		{
			visitQ.push({ temp.first, temp.second - 1 });
			visit[temp.first][temp.second - 1] = true;
			s++;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> m >> n >> k;

	for (int i = 0; i < k; i++)
	{
		int x1, y1, x2, y2;

		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1; j < x2; j++)
			for (int l = y1; l < y2; l++)
				graph[l][j] = 1;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (graph[i][j] == 0 && !visit[i][j])
			{
				bfs(i, j);
				cnt++;
				square.push_back(s);
				s = 0;
			}
		}
	}

	sort(square.begin(), square.end());

	cout << cnt << '\n';
	for (int i = 0; i < square.size(); i++)
		cout << square[i] << ' ';
}