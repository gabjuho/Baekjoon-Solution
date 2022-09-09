#include<iostream>
using namespace std;

int arr[301], dp[301];

int Max(int a, int b);

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = arr[0];
	dp[1] = Max(arr[0] + arr[1], arr[1]);
	dp[2] = Max(arr[0] + arr[2], arr[1] + arr[2]);

	for (int i = 3; i < n; i++)
		dp[i] = Max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);

	cout << dp[n - 1];
}

int Max(int a, int b)
{
	return a > b ? a : b;
}