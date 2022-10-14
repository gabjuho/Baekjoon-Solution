#include<iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int* arr;
	int n, m;
	cin >> n;

	arr = new int[n];

	cin >> arr[0];

	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;

		if (n1 == 1)
			cout << arr[n2 - 1] << '\n';
		else if (n1 == n2)
			cout << arr[n2 - 1] - arr[n2 - 2] << '\n';
		else
			cout << arr[n2 - 1] - arr[n1 - 2] << '\n';
	}

	delete[] arr;
}