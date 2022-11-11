#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<unsigned int> v;
	unsigned int n, m, maxValue = 0;
	unsigned int left, right, mid = 0, result = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);

		if (maxValue < num)
			maxValue = num;
	}

	left = 1;
	right = maxValue;

	while (left <= right)
	{
		unsigned long long sum = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < n; i++)
			if((int)v[i] - (int)mid > 0)
				sum += (v[i] - mid);

		if (sum >= m)
		{
			left = mid + 1;
			result = max(result, mid);
		}
		else
		{
			right = mid - 1;
		}
	}

	std::cout << result;
}