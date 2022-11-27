#include<iostream>
using namespace std;

int matrix[5][5], temp[5][5];
unsigned long long b;
int n;

void matrix_multiply(int a[][5], int b[][5])
{
	int powA[5][5];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			powA[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				powA[i][j] += (a[i][k] * b[k][j]) % 1000;
				powA[i][j] %= 1000;
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matrix[i][j] = powA[i][j];
}

void power(unsigned long long b)
{
	if (b == 1)
	{
		return;
	}

	if (b % 2 == 0)
	{
		power((b / 2));
		matrix_multiply(matrix, matrix);
	}
	else
	{
		power(b / 2);
		matrix_multiply(matrix, matrix);
		matrix_multiply(matrix, temp);
	}
}

int main()
{
	cin >> n >> ::b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
			matrix[i][j] %= 1000;
			temp[i][j] = matrix[i][j];
		}
	}

	power(::b);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << ' ';
		cout << '\n';
	}
}