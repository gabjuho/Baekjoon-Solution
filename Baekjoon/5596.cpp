#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		int num1, num2, num3, num4;
		cin >> num1 >> num2 >> num3 >> num4;

		if (num1 + num2 + num3 + num4 > sum)
		{
			sum = num1 + num2 + num3 + num4;
		}
	}

	cout << sum;
}