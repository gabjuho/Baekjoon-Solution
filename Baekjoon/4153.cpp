#include<iostream>
using namespace std;

void isRightTriangle(int a, int b, int c);
int main()
{
	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a > b && a > c)
			isRightTriangle(c, b, a);
		else if (b > a && b > c)
			isRightTriangle(c, a, b);
		else if (c > a && c > b)
			isRightTriangle(a, b, c);
	}
}

void isRightTriangle(int a, int b, int c)
{
	if (a * a + b * b == c * c)
		cout << "right" << endl;
	else
		cout << "wrong" << endl;
}