#include<iostream>
using namespace std;
int main()
{
	int minHam = 2100, minBev = 2100;
	for (int i = 0; i < 3; i++)
	{
		int price;
		cin >> price;
		if (minHam > price)
		{
			minHam = price;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		int price;
		cin >> price;
		if (minBev > price)
		{
			minBev = price;
		}
	}

	cout << minHam + minBev - 50;
}