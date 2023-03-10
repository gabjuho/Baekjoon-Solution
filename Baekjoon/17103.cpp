#include<iostream>
using namespace std;

bool arr[1000001];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	for (int j = 2; j <= 1000000; j++)
	{
		if (arr[j] == true)
			continue;

		for (int k = j; k <= 1000000; k += j)
		{
			if (k != j)
				arr[k] = true;
		}
	}

	for (int i = 0; i < t; i++)
	{
		int num, count = 0;
		cin >> num;

		for (int j = 2; j <= num / 2; j++)
		{
			if (arr[j] == false && arr[num - j] == false)
				count++;
		}

		cout << count << '\n';
	}
}