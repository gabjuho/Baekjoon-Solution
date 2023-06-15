#include<iostream>
using namespace std;
int main()
{
	int n, a, b, sum = 0;
	cin >> n;
	cin >> a >> b;

	sum += a / 2;
	sum += b;

	if (n >= sum)
	{
		cout << sum;
	}
	else
	{
		cout << n;
	}
}