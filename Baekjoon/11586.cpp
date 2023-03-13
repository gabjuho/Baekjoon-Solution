#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, state;
	cin >> n;

	string str[100];

	for (int i = 0; i < n; i++)
		cin >> str[i];

	cin >> state;

	if (state == 1)
	{
		for (int i = 0; i < n; i++)
			cout << str[i] << '\n';
	}
	else if (state == 2)
	{
		for (int i = 0; i < n; i++)
		{
			reverse(str[i].begin(), str[i].end());
			cout << str[i] << '\n';
		}
			
	}
	else
	{
		for (int i = n - 1; i >= 0; i--)
			cout << str[i] << '\n';
	}
}