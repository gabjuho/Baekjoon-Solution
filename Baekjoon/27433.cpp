#include<iostream>
using namespace std;

long long fact(long long n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int main()
{
	long long n;
	cin >> n;

	cout << fact(n);
}