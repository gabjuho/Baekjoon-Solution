#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, maxA = 0, maxB = 0, minA = 0, minB = 0, count = 0;

	cin >> a >> b;

	while (a != 0)
	{
		if (a % 10 == 5)
			maxA = maxA + 6 * pow(10, count);
		else
			maxA = maxA + (a % 10) * pow(10, count);

		if(a%10 == 6)
			minA = minA + 5 * pow(10, count);
		else
			minA = minA + (a % 10) * pow(10, count);

		a /= 10;
		count++;
	}
	
	count = 0;

	while (b != 0)
	{
		if (b % 10 == 5)
			maxB = maxB + 6 * pow(10, count);
		else
			maxB = maxB + (b % 10) * pow(10, count);

		if (b % 10 == 6)
			minB = minB + 5 * pow(10, count);
		else
			minB = minB + (b % 10) * pow(10, count);

		b /= 10;
		count++;
	}
	
	cout << minA + minB << ' ' << maxA + maxB;
}