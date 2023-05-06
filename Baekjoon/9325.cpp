#include<iostream>
using namespace std;
int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int price = 0;
		int car, n;

		cin >> car;
		cin >> n;

		price += car;

		for (int j = 0; j < n; j++)
		{
			int q, p;
			cin >> q >> p;

			price += q * p;
		}

		cout << price << '\n';
	}
}