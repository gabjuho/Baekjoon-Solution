#include<iostream>
using namespace std;
int main()
{
	int arr[1001] = { 0 };
	int a, b;
	cin >> a >> b;

	int now = 1, current = 0;

	for (int i = 1; i <= 1000; i++)
	{
		if (current == now)
		{
			now++;
			current = 0;
		}

		arr[i] += now + arr[i - 1];
		current++;
	}

	cout << arr[b] - arr[a - 1];
}