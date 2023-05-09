#include<iostream>
#include<memory.h>
using namespace std;

pair<int, int> matrixSize[501];
int dp[501][501];

int matrixDP(int start, int end)
{
	if (dp[start][end] != 0x3f3f3f3f)
	{
		return dp[start][end];
	}

	if (start == end)
	{
		return dp[start][end] = 0;
	}

	for (int mid = start; mid < end; mid++)
	{
		int left = matrixDP(start, mid);
		int right = matrixDP(mid + 1, end);

		int temp = left + right + matrixSize[start].first * matrixSize[mid].second * matrixSize[end].second;

		dp[start][end] = min(dp[start][end], temp);
	}

	return dp[start][end];
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> matrixSize[i].first >> matrixSize[i].second;
	}

	memset(dp, 0x3f, sizeof(dp));

	cout << matrixDP(1, n);
}