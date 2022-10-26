#include<iostream>
using namespace std;
int main()
{
	int** arr;
	int n, m;
	cin >> n >> m;

	arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int num;
			cin >> num;
			arr[i][j] += num;
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}


	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
}