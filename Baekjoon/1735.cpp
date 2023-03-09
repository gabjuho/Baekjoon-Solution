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
	long long c1, p1, c2, p2;
	cin >> c1 >> p1 >> c2 >> p2;

	long long p3 = p1 * p2;
	long long c3 = (c1 * p2) + (c2 * p1);
	long long gcd;

	if (p3 > c3)
		gcd = GCD(p3, c3);
	else
		gcd = GCD(c3, p3);

	cout << c3 / gcd << ' ' << p3 / gcd;
}