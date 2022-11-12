#include<iostream>
using namespace std;

int n;
int dp[16];
int price[16];
int t[16];

int MaxPrice(int day)
{
	if (day > n)
		return 0;

	if (dp[day] != 0)
		return dp[day];

	int n1 = 0;
	if(day + t[day] <= n + 1)
		n1 = MaxPrice(day + t[day]) + price[day];

	int n2 = 0;
	if (day + 1 <= n + 1)
		n2 = MaxPrice(day + 1);

	return dp[day] = max(n1, n2);
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> t[i];
		cin >> price[i];
	}

	cout << MaxPrice(1);
}