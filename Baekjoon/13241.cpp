#include<iostream>
using namespace std;
int main()
{
	long long a, b, gcd;
	long long tempA, tempB;

	cin >> a >> b;

	if (a < b)
	{
		tempA = b;
		tempB = a;
	}
	else
	{
		tempA = a;
		tempB = b;
	}
	
	while (tempA % tempB != 0)
	{
		int temp = tempB;
		tempB = tempA % tempB;
		tempA = temp;
	}

	gcd = tempB;
	
	cout << (a * b) / gcd;
}