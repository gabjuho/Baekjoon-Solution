#include<iostream>
using namespace std;

unsigned int lan[10000];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	unsigned int k, n;
	unsigned int firstValue = 1, currentValue, finalValue = 0, result = 0;
	cin >> k >> n;

	for (int i = 0; i < k; i++)
	{
		cin >> lan[i];
		if (finalValue < lan[i])
			finalValue = lan[i];
	}

	while (firstValue <= finalValue)
	{
		unsigned int count = 0;
		currentValue = (firstValue + finalValue) / 2;

		for (int i = 0; i < k; i++)
			count += lan[i] / currentValue;

		if (count >= n)
		{
			firstValue = currentValue + 1;
			result = max(result, currentValue);
		}
		else
		{
			finalValue = currentValue - 1;
		}
	}

	cout << result;
}