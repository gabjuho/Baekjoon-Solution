#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	long long n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long num;
		cin >> num;

		while (1)
		{
			bool isPrime = true;

			for (long long j = 2; j <= sqrt(num); j++)
			{
				if (num % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime == true)
				break;

			num++;
		}

		if (num == 0 || num == 1)
			num = 2;
		cout << num << '\n';
	}
}