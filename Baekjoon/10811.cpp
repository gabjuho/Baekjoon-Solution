#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[101];
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int i = 0; i < m; i++)
	{
		int start, end;
		cin >> start >> end;

		reverse(arr + start, arr + end + 1);
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';
}