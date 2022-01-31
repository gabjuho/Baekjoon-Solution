#include<iostream>
#include<math.h>
using namespace std;

int arr[1000001];
int main()
{
	int M, N, size;
	cin >> M >> N;

	arr[1] = 1;

	for (int i = 2; i <= (int)sqrt(N); i++)
	{
		if (arr[i] == 1) continue;
		for (int j = 2 * i; j <= N; j += i)
		{
			arr[j] = 1;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}
}