#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		int min = 200;
		for (int j = 0; j < 7; j++)
		{
			int num;
			cin >> num;

			if (num % 2 == 0)
			{
				if (min > num)
				{
					min = num;
				}

				sum += num;
			}
		}

		cout << sum << ' ' << min << '\n';
	}
}