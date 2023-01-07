#include<iostream>
#include<memory.h>
using namespace std;

int w, h;
int cnt = 0;
int graph[50][50];
bool visit[50][50];
pair<int, int> posIndex[8] = { make_pair(-1, 0),make_pair(1,0),make_pair(0,1),make_pair(0,-1),make_pair (-1,-1),make_pair(1, -1),make_pair (-1, 1),make_pair(1,1) };

void dfs(pair<int,int> pos)
{
	visit[pos.first][pos.second] = true;

	for (int i = 0; i < 8; i++)
	{
		if (!(pos.first + posIndex[i].first >= 0 && pos.first + posIndex[i].first < h && pos.second + posIndex[i].second >= 0 && pos.second + posIndex[i].second < w))
			continue;
		if (graph[pos.first + posIndex[i].first][pos.second + posIndex[i].second] == 1 && !visit[pos.first + posIndex[i].first][pos.second + posIndex[i].second])
			dfs(make_pair(pos.first + posIndex[i].first, pos.second + posIndex[i].second));
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1)
	{
		cin >> w >> h;

		if (w == 0 && h == 0)
			return 0;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> graph[i][j];

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (graph[i][j] == 1 && !visit[i][j])
				{
					cnt++;
					dfs({ i,j });
				}
			}
		}

		cout << cnt << '\n';

		cnt = 0;
		memset(graph, 0, sizeof(graph));
		memset(visit, false, sizeof(visit));
	}
}