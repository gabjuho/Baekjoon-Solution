#include<iostream>
using namespace std;
int main()
{
	long long n, k;
	long long left, mid, right;
	long long result = 0;

	cin >> n;
	cin >> k;

	left = 1;
	right = n * n;

	while (left <= right)
	{
		mid = (left + right) / 2;
		
		long long count = 1;
		for (int i = 1; i <= n; i++)
			count += min(n, mid / i);

		if (count > k)
		{
			right = mid - 1;
			result = mid;
		}
		else
		{
			left = mid + 1;
		}
	}

	cout << result;
}