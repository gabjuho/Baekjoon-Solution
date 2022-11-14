#include<iostream>
#include<algorithm>
using namespace std;

int house[200001];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, c;
	int left, mid, right;
	int result = 0;
	
	cin >> n >> c;

	for (int i = 1; i <= n; i++)
		cin >> house[i];

	sort(house, house + n + 1);

	left = 0;
	right = house[n];

	while (left <= right)
	{
		mid = (left + right) / 2;

		int target = 1, count = 1;
		for (int i = 2; i <= n; i++)
		{
			if (house[target] + mid <= house[i])
			{
				target = i;
				count++;
			}
		}

		if (count < c)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
			result = max(mid, result);
		}
	}

	cout << result;
}