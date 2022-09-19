#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int>> v;
int dp[101];
int n;

int LIS(int index)
{
	bool isMax = false;

	if (dp[index] != 0)
		return dp[index];
	
	for (int i = index + 1; i < n; i++)
	{
		if (v[index].second < v[i].second)
		{
			int lis = LIS(i) + 1;
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

bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.first < b.first;
}

int main()
{
	int max = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int number, target;
		cin >> number >> target;
		v.push_back({ number, target });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
	{
		int lis = LIS(i);
		if (lis > max)
			max = lis;
	}

	cout << n - max;
}