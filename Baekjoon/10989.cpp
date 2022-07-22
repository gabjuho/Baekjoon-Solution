#include<iostream>
using namespace std;

int main()
{
	int N, num;

	cin >> N;

	int arr[10001] = { 0 };

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++)
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);
}