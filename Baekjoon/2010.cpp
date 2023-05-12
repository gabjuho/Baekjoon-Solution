#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int plug;
		cin >> plug;

		sum += plug;
	}

	sum -= n - 1;

	cout << sum;
}