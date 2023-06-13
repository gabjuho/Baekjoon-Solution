#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	while (1)
	{
		int n;
		cin >> n;

		if (n == -1)
		{
			cout << sum;
			break;
		}

		sum += n;
	}
}