#include<iostream>
#include<limits>
using namespace std;

int chess[2001][2001];
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, k;
	int min = 4000000;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			char color;
			cin >> color;
			if (((i + j) % 2 == 1 && color == 'B') || ((i + j) % 2 == 0 && color == 'W'))
				chess[i][j] = chess[i - 1][j] + chess[i][j - 1] - chess[i - 1][j - 1];
			else
				chess[i][j] = chess[i - 1][j] + chess[i][j - 1] + 1 - chess[i - 1][j - 1];
		}
	}

	for (int i = 1; i <= n - k + 1; i++)
	{
		for (int j = 1; j <= m - k + 1; j++)
		{
			int temp = chess[i + k - 1][j + k - 1] - chess[i - 1][j + k - 1] - chess[i + k - 1][j - 1] + chess[i - 1][j - 1];
			if (temp > k * k / 2)
				temp = k * k - temp;
			if (temp < min)
				min = temp;
		}
	}

	cout << min;
}