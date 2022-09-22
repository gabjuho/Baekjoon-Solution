#include<iostream>
#include<vector>
using namespace std;

int n;
int k;
int cnt, arr_k;

void merge(int arr[], int p, int q, int r)
{
	int* tmp = new int[r - p + 2];
	int i = p, j = q + 1, t = 1;

	while (i <= q && j <= r)
	{
		if (arr[i] <= arr[j])
			tmp[t++] = arr[i++];
		else
			tmp[t++] = arr[j++];
	}
	while (i <= q)
		tmp[t++] = arr[i++];
	while (j <= r)
		tmp[t++] = arr[j++];
	i = p;
	t = 1;
	while (i <= r)
	{
		cnt++;
		if (cnt == k)
			arr_k = tmp[t];
		arr[i++] = tmp[t++];
	}
	delete tmp;
}

void merge_sort(int arr[], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

int main()
{

	cin >> n >> k;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	merge_sort(arr, 0, n - 1);

	if (cnt >= k)
		cout << arr_k;
	else
		cout << -1;

	delete arr;
}