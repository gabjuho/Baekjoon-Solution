#include<iostream>
using namespace std;

int map[501][501];
int dp[501][501];

int xOffset[] = { -1, 0, 1, 0 };
int yOffset[] = { 0, 1, 0, -1 };

int n, m;

int mapDP(int x, int y)
{
	bool isNoWay = true;

	if (dp[x][y] == -1)
	{
		return dp[x][y];
	}

	if (x == 1 && y == 1)
	{
		return 1;
	}

	if (dp[x][y] != 0)
	{
		return dp[x][y];
	}

	for (int i = 0; i < 4; i++)
	{
		if (x + xOffset[i] > n || x + xOffset[i] < 0 || y + yOffset[i] > m || y + yOffset[i] < 0)
		{
			continue;
		}
		if (map[x + xOffset[i]][y + yOffset[i]] > map[x][y])
		{
			int result = mapDP(x + xOffset[i], y + yOffset[i]);

			if (result != -1)
			{
				isNoWay = false;
				dp[x][y] += result;
			}
		}
	}

	if (isNoWay == false)
	{
		return dp[x][y];
	}
	else
	{
		return dp[x][y] = -1;
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
			cin >> map[i][j];
		}
	}

	int result = mapDP(n, m);

	if (result == -1)
		cout << 0;
	else
		cout << result;
}