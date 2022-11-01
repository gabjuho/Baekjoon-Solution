#include<iostream>
#include<cstring>
using namespace std;

int dpArray[300];

int dp(int sum)
{
	if (sum < 0)
		return 0;
	else if (sum == 0)
		return 1;
	else
	{
		if (dpArray[sum] != 0)
			return dpArray[sum];
		else
			return dpArray[sum] = dp(sum - 1) + dp(sum - 2) + dp(sum - 3);
	}
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cout << dp(n) << '\n';
		memset(dpArray, 0, 300);
	}
}