#include<iostream>
using namespace std;
int main()
{
	int arr[101] = { 0 };
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int i = 0; i < m; i++)
	{
		int bucket1, bucket2;
		cin >> bucket1 >> bucket2;

		int temp = arr[bucket1];
		arr[bucket1] = arr[bucket2];
		arr[bucket2] = temp;
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';
}