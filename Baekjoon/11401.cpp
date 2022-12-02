#include<iostream>
using namespace std;

unsigned long long power(unsigned long long a, unsigned long long b)
{
	if (b == 1)
		return a % 1000000007;
	if (b % 2 == 0)
	{
		return (power((a * a) % 1000000007, b / 2)) % 1000000007;
	}
	else
	{
		return (power((a * a) % 1000000007, (b - 1) / 2) * a) % 1000000007;
	}
}

int main()
{
	unsigned long long nFact = 1, kFact = 1, nkFact = 1;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (i <= k)
		{
			kFact *= i;
			kFact %= 1000000007;
		}
		if (i <= n - k)
		{
			nkFact *= i;
			nkFact %= 1000000007;
		}
		nFact *= i;
		nFact %= 1000000007;
	}
	nkFact *= kFact;
	nkFact %= 1000000007;

	cout << (nFact * power(nkFact, 1000000005)) % 1000000007;
}