#include<iostream>
using namespace std;
int main()
{
	int n, maxX = -20000, minX = 20000, maxY = -20000, minY = 20000;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		if (minX > x)
			minX = x;
		if (maxX < x)
			maxX = x;
		if (minY > y)
			minY = y;
		if (maxY < y)
			maxY = y;
	}

	cout << (maxX - minX) * (maxY - minY);
}