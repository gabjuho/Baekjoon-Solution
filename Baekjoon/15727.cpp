#include<iostream>
using namespace std;
int main()
{
	int l;
	cin >> l;

	if (l % 5 == 0)
	{
		cout << l / 5;
	}
	else
	{
		cout << l / 5 + 1;
	}
}