#include<iostream>
using namespace std;

int n;
int dp[1001], num[1001];

int LIS(int index)
 {
	int lis;
	bool isMax = false;

	if (dp[index] != 0)
		return dp[index];

	for (int i = index; i < n - 1; i++)
	{
		if (num[index] < num[i + 1])
		{
			lis = LIS(i + 1) + 1;
			if (dp[index] < lis)
				dp[index] = lis;
			isMax = true;
		}
	}

	if (!isMax)
		return 1;
	else
		return dp[index];
}

int main()
{
	int max = -1, lis = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
	{
		lis = LIS(i);
		if (max < lis)
			max = lis;
	}

	cout << max;
}