#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	unsigned int N;
	int size = 0 , max = -1, maxIndex = 0;

	cin >> N;

	while (N != 0)
	{
		arr[size++] = N % 10;
		N /= 10;
	}

	for (int i = 0; i < size; i++)
	{
		maxIndex = i;
		for (int j = i; j < size; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				maxIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[maxIndex];
		arr[maxIndex] = temp;

		printf("%d", arr[i]);

		max = -1;
	}
}