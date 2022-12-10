#include<iostream>
using namespace std;

unsigned long long matrix[2][2] = { {1,1},{1,0} }, matrixStart[2][1] = { {1},{0} };
unsigned long long currentMatrix[2][2], tempMatrix[2][2] = { {1,1},{1,0} }, resultMatrix[2][1];

unsigned long long fibo(unsigned long long n);
void matrixMultiply(unsigned long long a[][2], unsigned long long b[][2]);
void power(unsigned long long n);

int main()
{
	unsigned long long n;

	cin >> n;

	cout << fibo(n) % 1000000007;
}

unsigned long long fibo(unsigned long long n)
{
	power(n);

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 1; j++)
			for (int k = 0; k < 2; k++)
				resultMatrix[i][j] += tempMatrix[i][k] * matrixStart[k][j];

	return resultMatrix[1][0];
}

void matrixMultiply(unsigned long long a[][2], unsigned long long b[][2])
{
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			for (int k = 0; k < 2; k++)
				currentMatrix[i][j] += a[i][k] * b[k][j];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			tempMatrix[i][j] = currentMatrix[i][j] % 1000000007;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			currentMatrix[i][j] = 0;
}
void power(unsigned long long n)
{
	if (n == 1)
	{
		return;
	}

	if (n % 2 == 0)
	{
		power(n / 2);

		matrixMultiply(tempMatrix, tempMatrix);
	}
	else
	{
		power(n / 2);

		matrixMultiply(tempMatrix, tempMatrix);
		matrixMultiply(tempMatrix, matrix);
	}
}