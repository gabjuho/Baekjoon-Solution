#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, cnt = 0, prev = 0, gcd = -1, sub = 0, start, last;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int pos;
		cin >> pos;

		if (i == 0)
			start = pos;

		if (i >= 1)
		{
			sub = abs(pos - prev);
			if(i == 1)
				gcd = sub;
		}
		if (i >= 2)
		{
			if (gcd > sub)
				gcd = GCD(gcd, sub);
			else
				gcd = GCD(sub, gcd);
		}

		prev = pos;

		if (i == n - 1)
			last = pos;
	}

	cout << (last - start) / gcd + 1 - n;
}