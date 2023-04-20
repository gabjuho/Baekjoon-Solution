#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, num1 = 1, num2 = 1;
	cin >> n;

	for (int i = 0; i < n - 2; i++)
	{
		sum = num1 + num2;
		

		num1 = num2;
		num2 = sum;
	}

	if (n == 1 || n == 2)
	{
		cout << 1;
	}
	else
	{
		cout << sum;
	}

}