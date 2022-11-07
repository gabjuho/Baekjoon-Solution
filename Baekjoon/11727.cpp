#include<iostream>
using namespace std;

int dp[1001];

int solve(int n)
{
	if (dp[n] != 0)
		return dp[n];

	if (n == 0)
		return 1;
	else if (n < 0)
		return 0;

	int n1 = solve(n - 1);
	int n2 = solve(n - 2);
	int n3 = solve(n - 2);

	return dp[n] = (n1 + n2 + n3) % 10007;
}

int main()
{
	int n;
	cin >> n;

	cout << solve(n);
}