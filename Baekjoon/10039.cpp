#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;

		if (num < 40)
			num = 40;
		sum += num;
	}

	cout << sum / 5;
}