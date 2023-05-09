#include<iostream>
#include<memory.h>
using namespace std;

int dp[501][501];
int cost[501];
int sum[501];
int n;

int fileDP(int start, int end)
{
	if (dp[start][end] != 0x3f3f3f3f)
	{
		return dp[start][end];
	}

	if (start == end)
	{
		return dp[start][end] = 0;
	}

	if (start + 1 == end)
	{
		return dp[start][end] = cost[start] + cost[end];
	}

	for (int mid = start; mid < end; mid++)
	{
		int left = fileDP(start, mid);
		int right = fileDP(mid + 1, end);

		dp[start][end] = min(dp[start][end], left + right);
	}

	return dp[start][end] += sum[end] - sum[start - 1];
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;

		memset(dp, 0x3f, sizeof(dp));
		for (int j = 1; j <= n; j++)
		{
			cin >> cost[j];
			sum[j] = sum[j - 1] + cost[j];
		}

		cout << fileDP(1, n) << '\n';
	}
}