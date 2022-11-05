#include<iostream>
using namespace std;

long long dp[91];

long long fibonacci(int n)
{
	if (dp[n] != 0)
		return dp[n];

	if (n == 1 || n == 2)
		return 1;
	
	return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int n;
	cin >> n;

	cout << fibonacci(n);
}