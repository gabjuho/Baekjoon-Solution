#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int change;
		cin >> change;

		cout << change / 25 <<' ';
		change %= 25;

		cout << change / 10 << ' ';

		change %= 10;

		cout << change / 5 << ' ';

		change %= 5;

		cout << change / 1 << '\n';
	}
}