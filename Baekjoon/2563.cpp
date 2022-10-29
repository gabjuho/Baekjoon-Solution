#include<iostream>
using namespace std;
int square[100][100];
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (square[j][k] == 0)
				{
					square[j][k] = 1;
					count++;
				}
			}
		}
	}

	cout << count;
	
	
}