#include<iostream>
#include<vector>
using namespace std;

int** arr;
int blue, white;

void CutPaper(int startX, int endX, int startY, int endY)
{
	bool isAllBlue = true;
	bool isAllWhite = true;

	for (int i = startY; i <= endY; i++)
	{
		for (int j = startX; j <= endX; j++)
		{
			if (arr[j][i] == 0)
				isAllBlue = false;
			else
				isAllWhite = false;
		}
	}
	if (isAllBlue && !isAllWhite)
	{
		blue++;
		return;
	}
	else if (!isAllBlue && !isAllWhite)
	{
		CutPaper(startX, (startX + endX) / 2, startY, (startY + endY) / 2);
		CutPaper((startX + endX) / 2 + 1, endX, startY, (startY + endY) / 2);
		CutPaper(startX, (startX + endX) / 2, (startY + endY) / 2 + 1, endY);
		CutPaper((startX + endX) / 2 + 1, endX, (startY + endY) / 2 + 1, endY);
		return;
	}
	else if (!isAllBlue && isAllWhite)
	{
		white++;
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

	CutPaper(0, n - 1, 0, n - 1);

	cout << white << '\n' << blue;
}