#include<iostream>
using namespace std;

int dp[1000];

int rectangle(int n)
{
	if (dp[n] != 0)
		return dp[n];

	if (n == 0)
		return 1;
	else if (n < 0)
		return 0;

	int n1 = rectangle(n - 1);
	int n2 = rectangle(n - 2);

	return dp[n] = (n1 + n2) % 10007;
}

int main()
{
	int n;
	cin >> n;

	cout << rectangle(n);
}