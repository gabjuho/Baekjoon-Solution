#include<iostream>
using namespace std;

int dpLeft[1001], num[1001], dpRight[1001];
int n;

int LISDecreaseLeft(int index)
{
	int max = -1;
	if (dpLeft[index] != 0)
		return dpLeft[index];

	for (int i = index - 1; i >= 0; i--)
	{

		if (num[index] > num[i])
		{
			int lis = LISDecreaseLeft(i) + 1;

			if (max < lis)
				max = lis;

			dpLeft[index] = max;
		}
	}

	if (max == -1)
		return 1;
	else
		return dpLeft[index];
}
int LISDecreaseRight(int index)
{
	int max = -1;
	if (dpRight[index] != 0)
		return dpRight[index];

	for (int i = index + 1; i < n; i++)
	{
		if (num[index] > num[i])
		{
			int lis = LISDecreaseRight(i) + 1;

			if (max < lis)
				max = lis;

			dpRight[index] = max;
		}
	}

	if (max == -1)
		return 1;
	else
		return dpRight[index];
}

int main()
{
	int max = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		num[i] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		int lis = LISDecreaseLeft(i) + LISDecreaseRight(i);
		if (max < lis)
			max = lis;
	}

	cout << max - 1;
}