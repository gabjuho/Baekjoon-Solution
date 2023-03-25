#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		if (a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		if (a < c)
		{
			int temp = a;
			a = c;
			c = temp;
		}

		if (a >= b + c)
			cout << "Invalid\n";
		else if (a == b && b == c)
			cout << "Equilateral\n";
		else if (a == b || b == c || c == a)
			cout << "Isosceles\n";
		else if (a != b && b != c && c != a)
			cout << "Scalene\n";
	}
}