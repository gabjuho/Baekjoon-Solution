#include<iostream>
using namespace std;
int main()
{
	string room[100];
	int n, horizontal = 0, vertical = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> room[i];

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[i][j] == '.')
			{
				count++;
			}
			else
			{
				if (count >= 2)
					horizontal++;
				count = 0;
			}
		}
		if (count >= 2)
			horizontal++;
	}

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[j][i] == '.')
			{
				count++;
			}
			else
			{
				if (count >= 2)
					vertical++;
				count = 0;
			}
		}
		if (count >= 2)
			vertical++;
	}

	cout << horizontal << ' ' << vertical;
}