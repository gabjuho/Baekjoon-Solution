#include<iostream>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			count++;
		}
	}

	if (count > n - count)
	{
		cout << "Junhee is not cute!";
	}
	else
	{
		cout << "Junhee is cute!";
	}
}