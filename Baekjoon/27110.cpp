#include<iostream>
using namespace std;
int main()
{
	int n, a, b, c, sum = 0;
	cin >> n;

	cin >> a >> b >> c;

	if (n - a > 0)
	{
		sum += a;
	}
	else
	{
		sum += n;
	}
	if (n - b > 0)
	{
		sum += b;
	}
	else
	{
		sum += n;
	}
	if (n - c > 0)
	{
		sum += c;
	}
	else
	{
		sum += n;
	}

	cout << sum;
}