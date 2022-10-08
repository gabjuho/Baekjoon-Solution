#include<iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length() / 10; i++)
	{
		for (int j = i * 10; j < 10 * (i + 1); j++)
			cout << str[j];
		cout << '\n';
	}

	for (int i = str.length() / 10 * 10; i < str.length(); i++)
		cout << str[i];
}