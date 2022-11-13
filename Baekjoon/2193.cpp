#include<iostream>
using namespace std;

long long dp[91][2];

long long Binary(int count, int now)
{
	if (dp[count][now] != 0)
		return dp[count][now];

	if (count <= 1)
		return 1;

	if (now == 1)
		return dp[count][now] = Binary(count - 1, 0);
	else
		return dp[count][now] = Binary(count - 1, 0) + Binary(count - 1, 1);
}

int main()
{
	int n;
	cin >> n;

	cout << Binary(n, 1);
}