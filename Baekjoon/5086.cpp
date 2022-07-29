#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int num1, num2;
		cin >> num1 >> num2;

		if (num1 == 0)
			break;

		if (num2 % num1 == 0)
			printf("factor\n");
		else if (num1 % num2 == 0)
			printf("multiple\n");
		else
			printf("neither\n");
	}
}