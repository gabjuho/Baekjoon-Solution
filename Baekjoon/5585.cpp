#include<iostream>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;

	n = 1000 - n;

	while (n != 0)
	{
		if (n >= 500)
		{
			count += n / 500;
			n %= 500;
		}
		else if (n >= 100)
		{
			count += n / 100;
			n %= 100;
		}
		else if (n >= 50)
		{
			count += n / 50;
			n %= 50;
		}
		else if (n >= 10)
		{
			count += n / 10;
			n %= 10;
		}
		else if (n >= 5)
		{
			count += n / 5;
			n %= 5;
		}
		else if(n < 5)
		{
			count += n;
			n = 0;
		}
	}

	cout << count;
}