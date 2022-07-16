#include<iostream>
using namespace std;
int main()
{
	int N, M, sum = 0;

	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			for (int k = 0; k < N; k++)
			{
				if (i != j && i != k && j != k)
				{
					int temp = arr[i] + arr[j] + arr[k];
					if (sum < temp && temp <= M)
						sum = temp;
				}
			}
		}
	}

	cout << sum;
}