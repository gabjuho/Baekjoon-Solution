#include<iostream>
using namespace std;

int numberOfBridge(int n, int m);

int arr[31][31];

int main()
{
	int T, N, M;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		cout << numberOfBridge(M, N) << '\n';
	}
}

int numberOfBridge(int n, int m)
{
	if (m == 0 || n == m)
		return 1;
	for (int i = 1; i <= n; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[i + 1][j + 1] = arr[i][j] + arr[i][j + 1];
			if (i + 1 == n && j + 1 == m)
				return arr[n][m];
		}
	}
}