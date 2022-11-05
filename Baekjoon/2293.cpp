#include<iostream>
using namespace std;

int v[101];
int dp[10001];
int n, k;

int main()
{
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
		cin >> v[i];

	dp[0] = 1;

	for (int i = 0; i < n; i++)
		for (int j = v[i]; j <= k; j++)
			dp[j] += dp[j - v[i]];

	cout << dp[k];
}