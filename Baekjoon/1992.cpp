#include<iostream>
using namespace std;

char** arr;
void compress(int startX, int endX, int startY, int endY)
{
	bool isAllBlack = true;
	bool isAllWhite = true;
	for (int i = startX; i <= endX; i++)
	{
		for (int j = startY; j <= endY; j++)
		{
			if (arr[i][j] == '0')
				isAllBlack = false;
			else
				isAllWhite = false;
		}
	}

	if (isAllBlack && !isAllWhite)
	{
		cout << 1;
		return;
	}
	else if (!isAllBlack && !isAllWhite)
	{
		cout << '(';
		compress(startX, (startX + endX) / 2, startY, (startY + endY) / 2);
		compress((startX + endX) / 2 + 1, endX, startY, (startY + endY) / 2);
		compress(startX, (startX + endX) / 2, (startY + endY) / 2 + 1, endY);
		compress((startX + endX) / 2 + 1, endX, (startY + endY) / 2 + 1, endY);
		cout << ')';
		return;
	}
	else if (!isAllBlack && isAllWhite)
	{
		cout << 0;
		return;
	}
}

int main()
{
	int n;

	cin >> n;

	arr = new char* [n];

	for (int i = 0; i < n; i++)
		arr[i] = new char[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[j][i];

	compress(0, n - 1, 0, n - 1);
}