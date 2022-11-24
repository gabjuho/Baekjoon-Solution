#include<iostream>
#include<vector>
using namespace std;

int team[21];
int n;
int playerStat[21][21];
int minStat = 2147483647;

void dfs(int count, int index)
{
	if (count == n / 2)
	{
		int statDiff = 0;

		for (int i = 1; i <= n - 1; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (i != j && team[i] == team[j] && team[i] == 1)
					statDiff += (playerStat[i][j] + playerStat[j][i]);
				else if (i != j && team[i] == team[j] && team[i] == 0)
					statDiff -= (playerStat[i][j] + playerStat[j][i]);
			}
		}

		minStat = min(minStat, abs(statDiff));
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		bool isPlace = true;
		if (team[i] == 1 || index > i)
			isPlace = false;

		if (!isPlace)
			continue;

		team[i] = 1;
		dfs(count + 1, i);
		team[i] = 0;
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> playerStat[i][j];

	dfs(0, -1);

	cout << minStat;
}