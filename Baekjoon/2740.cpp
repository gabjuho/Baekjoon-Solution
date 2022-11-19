#include<iostream>
using namespace std;

int A[100][100];
int B[100][100];
int C[100][100];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m, k;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> A[j][i];

	cin >> m >> k;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			cin >> B[j][i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			for (int l = 0; l < m; l++)
				C[j][i] += A[l][i] * B[j][l];

			cout << C[j][i] << ' ';
		}
		cout << '\n';
	}

	
}