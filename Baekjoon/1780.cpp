#include<iostream>
using namespace std;

int** arr;
int one, minus, zero;

void Paper(int startX, int endX, int startY, int endY)
{
	bool isAllOne = true, isAllMinus = true, isAllZero = true;

	for (int i = startY; i <= endY; i++)
	{
		for (int j = startX; j <= endX; j++)
		{
			if (arr[j][i] == 1)
			{
				isAllMinus = false;
				isAllZero = false;
			}
			else if (arr[j][i] == 0)
			{
				isAllOne = false;
				isAllMinus = false;
			}
			else
			{
				isAllOne = false;
				isAllZero = false;
			}
		}
	}

	if (isAllOne && !isAllZero && !isAllMinus)
	{
		one++;
		return;
	}
	else if (!isAllOne && isAllZero && !isAllMinus)
	{
		zero++;
		return;
	}
	else if (!isAllOne && !isAllZero && isAllMinus)
	{
		::minus++;
		return;
	}
	else if(!isAllOne && !isAllMinus && !isAllZero)
	{
		int endStartDiffX = endX - startX;
		int endStartDiffY = endY - startY;
		Paper(startX, startX + endStartDiffX / 3, startY, startY + endStartDiffY / 3);
		Paper(startX + endStartDiffX / 3 + 1, startX + endStartDiffX * 2 / 3, startY, startY + endStartDiffY / 3);
		Paper(startX + endStartDiffX * 2 / 3 + 1, endX, startY, startY + endStartDiffY / 3);

		Paper(startX, startX + endStartDiffX / 3, startY + endStartDiffY / 3 + 1, startY + endStartDiffY * 2 / 3);
		Paper(startX + endStartDiffX / 3 + 1, startX + endStartDiffX * 2 / 3, startY + endStartDiffY / 3 + 1, startY + endStartDiffY * 2 / 3);
		Paper(startX + endStartDiffX * 2 / 3 + 1, endX, startY + endStartDiffY / 3 + 1, startY + endStartDiffY * 2 / 3);

		Paper(startX, startX + endStartDiffX / 3, startY + endStartDiffY * 2 / 3 + 1, endY);
		Paper(startX + endStartDiffX / 3 + 1, startX + endStartDiffX * 2 / 3, startY + endStartDiffY * 2 / 3 + 1, endY);
		Paper(startX + endStartDiffX * 2 / 3 + 1, endX, startY + endStartDiffY * 2 / 3 + 1, endY);

		return;
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[j][i];

	Paper(0, n - 1, 0, n - 1);

	cout << ::minus << '\n' << zero << '\n' << one;
}