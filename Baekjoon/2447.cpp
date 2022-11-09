#include<iostream>
using namespace std;

char star[2188][2188];

void saveStar(int n, int x, int y)
{
	if (n == 3)
	{
		for (int i = x; i < x + 3; i++)
		{
			for (int j = y; j < y + 3; j++)
			{
				if (i == x + 1 && j == y + 1)
					continue;
				star[i][j] = '*';
			}
		}
		return;
	}

	saveStar(n / 3, x, y);
	saveStar(n / 3, x + n / 3, y);
	saveStar(n / 3, x + n / 3 * 2, y);
	saveStar(n / 3, x, y + n / 3);
	saveStar(n / 3, x, y + n / 3 * 2);
	saveStar(n / 3, x + n / 3, y + n / 3 * 2);
	saveStar(n / 3, x + n / 3 * 2, y + n / 3);
	saveStar(n / 3, x + n / 3 * 2, y + n / 3 * 2);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	saveStar(n, 0, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (star[i][j] == 0)
				cout << ' ';
			else
				cout << star[i][j];
		}
		cout << '\n';
	}
}