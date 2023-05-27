#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a < b - c)
		{
			cout << "advertise\n";
		}
		else if (a == b - c)
		{
			cout << "does not matter\n";
		}
		else
		{
			cout << "do not advertise\n";
		}
	}
}