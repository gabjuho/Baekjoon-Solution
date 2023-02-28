#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;


	for (int i = 1; i < 2 * n; i++)
	{
		int temp = i;

		if (i <= n)
			temp = n - i;
		else
			temp = i - n;

		for (int j = 1; j <= temp; j++)
			cout << ' ';

		for (int j = 1; j <= 2 * (n - temp) - 1; j++)
			cout << '*';

		cout << '\n';
	}
}