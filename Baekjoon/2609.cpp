#include<iostream>
using namespace std;

int GCD(int n1, int n2);

int main()
{
	int n1, n2, gcd, lcm;
	cin >> n1 >> n2;

	if (n1 > n2)
		gcd = GCD(n1, n2);
	else
		gcd = GCD(n2, n1);

	lcm = n1 * n2 / gcd;

	cout << gcd << '\n' << lcm;
}

int GCD(int n1, int n2)
{
	if (n2 != 0)
		return GCD(n2, n1 % n2);
	else
		return n1;
}