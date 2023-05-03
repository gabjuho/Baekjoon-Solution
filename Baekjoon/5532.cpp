#include<iostream>
using namespace std;
int main()
{
	int l, a, b, c, d;

	cin >> l >> a >> b >> c >> d;

	if (a / c > b / d)
	{
		l -= a / c;

		if (a % c != 0)
			l--;
	}
	else
	{
		l -= b / d;

		if (b % d != 0)
			l--;
	}

	cout << l;
}