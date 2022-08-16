#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned long long> disV, priceV;
	int n, minPrice = 1000000001;
	unsigned long long min = 1000000001, sum = 0;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int distance;
		cin >> distance;
		disV.push_back(distance);
	}

	for (int i = 0; i < n; i++)
	{
		int price;
		cin >> price;
		if (minPrice > price)
			minPrice = price;
		priceV.push_back(minPrice);
	}

	for (int i = 0; i < n - 1; i++)
	{
		sum += disV[i] * priceV[i];
	}

	cout << sum;
}