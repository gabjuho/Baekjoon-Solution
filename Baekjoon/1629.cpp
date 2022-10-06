#include<iostream>
using namespace std;

long long c;

long long power(long long a, long long b)
{
	if (b == 0)
		return 1;

	if (b % 2 == 1)
	{
		return ((a % c) * power((a % c) * (a % c), (b - 1) / 2)) % c;
	}
	else
	{
		return power((a % c) * (a % c), b / 2) % c;
	}
}

int main()
{
	long long a, b;
	cin >> a >> b >> c;

	cout << power(a, b) % c;
}