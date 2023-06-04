#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		double price;
		cin >> price;

		printf("$%.2lf\n", price * 0.8);
	}
}