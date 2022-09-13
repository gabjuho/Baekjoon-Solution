#include<iostream>
using namespace std;

int grape[10010], dp[10010];

int Max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n, max = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> grape[i];

	dp[0] = grape[0];
	dp[1] = Max(grape[0] + grape[1], grape[1]);
	dp[2] = Max(grape[0] + grape[2], grape[1] + grape[2]);
	dp[2] = Max(dp[1], dp[2]);

	for (int i = 3; i <= n; i++)
	{
		dp[i] = Max(dp[i - 3] + grape[i - 1] + grape[i], dp[i - 2] + grape[i]);
		dp[i] = Max(dp[i - 1], dp[i]);
	}

	cout << dp[n];
}