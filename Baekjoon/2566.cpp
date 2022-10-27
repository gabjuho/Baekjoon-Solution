#include<iostream>
using namespace std;
int main()
{
	int arr[9][9];
	int max = -1, maxV, maxH;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				maxH = i + 1;
				maxV = j + 1;
			}
		}
	}

	cout << max << '\n';
	cout << maxH << ' ' << maxV;

	
}