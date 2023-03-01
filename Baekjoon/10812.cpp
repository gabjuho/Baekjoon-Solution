#include<iostream>
using namespace std;
int main()
{
	int arr[101], temp[101];
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
		temp[i] = i;
	}

	for (int i = 0; i < m; i++)
	{
		int start, mid, end;
		cin >> start >> end >> mid;

		for (int j = 0; j <= end - mid; j++)
			arr[start + j] = arr[mid + j];

		for (int j = 0; j < mid - start; j++)
			arr[start + (end - mid) + j + 1] = temp[start + j];

		for (int j = 1; j <= n; j++)
			temp[j] = arr[j];
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';
}