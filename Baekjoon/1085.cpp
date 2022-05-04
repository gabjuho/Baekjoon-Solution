#include<iostream>
using namespace std;
int main()
{
	int x, y, w, h, selX, selY;

	cin >> x >> y >> w >> h;

	if (w - x <= w / 2)
		selX = w - x;
	else
		selX = x;

	if (h - y <= h / 2)
		selY = h - y;
	else
		selY = y;

	if (selX <= selY)
		cout << selX;
	else
		cout << selY;
}