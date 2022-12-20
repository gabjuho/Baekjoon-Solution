#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
char graph[25][25];
bool visit[25][25];
int n;
int count, house;

void dfs(int x, int y)
{
	visit[x][y] = true;
	::count++;

	if (x - 1 >= 0 && graph[x - 1][y] && !visit[x - 1][y])
		dfs(x - 1, y);
	if (x + 1 < n && graph[x + 1][y] && !visit[x + 1][y])
		dfs(x + 1, y);
	if (y + 1 < n && graph[x][y + 1] && !visit[x][y + 1])
		dfs(x, y + 1);
	if (y - 1 >= 0 && graph[x][y - 1] && !visit[x][y - 1])
		dfs(x, y - 1);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> graph[i][j];
			graph[i][j] -= '0';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (graph[i][j] && !visit[i][j])
			{
				dfs(i, j);
				v.push_back(::count);
				::count = 0;
				house++;
			}
		}
	}

	sort(v.begin(), v.end());

	cout << house << '\n';
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}