#include<iostream>
using namespace std;

int arr[1005][1005];
int binomial(int n, int k);

int main()
{
	int N, K;

	cin >> N >> K;

	cout << binomial(N, K);
}

int binomial(int n, int k)
{
	if (k == 0 || k == n)
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
			int temp = (arr[i][j] % 10007) + (arr[i][j + 1] % 10007);
			if (temp >= 10007)
				temp %= 10007;
			arr[i + 1][j + 1] = temp;
			if (i + 1 == n && j + 1 == k)
				return arr[n][k];
		}
	}

}