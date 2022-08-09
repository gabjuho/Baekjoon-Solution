#include<iostream>
using namespace std;
int main()
{
	int* arr;
	int n, k, sum = 0;
	cin >> n >> k;

	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (k >= arr[i])
		{
			sum += k / arr[i];
			k %= arr[i];
		}
	}

	cout << sum;
}