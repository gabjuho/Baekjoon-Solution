#include<iostream>
#include<vector>
using namespace std;

long long dpStairNumber(int n1, int n2);


long long dp[101][10];
int main()
{
	int n;
	long long sum = 0;
	cin >> n;

	for (int i = 0; i <= 9; i++)
		dp[0][i] = 1;

	for (int i = 1; i <= 9; i++)
		sum += dpStairNumber(n - 1, i);

	cout << sum % 1000000000;
}

long long dpStairNumber(int n1, int n2) //n은 총 몇 자리? n2는 몇번째 자리?
{
	if (n1 == 0)
		return dp[0][n2];
	else
	{
		if (dp[n1][n2] != 0)
		{
			dp[n1][n2] %= 1000000000;
			return dp[n1][n2];
		}

		if (n2 - 1 >= 0)
			dp[n1][n2] += (dpStairNumber(n1 - 1, n2 - 1) % 1000000000);
		if (n2 + 1 <= 9)
			dp[n1][n2] += (dpStairNumber(n1 - 1, n2 + 1) % 1000000000);

		dp[n1][n2] %= 1000000000;

		return dp[n1][n2];
	}

}