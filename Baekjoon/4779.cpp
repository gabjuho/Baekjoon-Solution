#include<iostream>
#include<cmath>
using namespace std;

string recursive(string str)
{
	string empty = "";

	for (int i = 0; i < str.size() / 3; i++)
	{
		empty += ' ';
	}
	if (str.size() == 1)
	{
		return str;
	}
	else
	{
		return recursive(str.substr(0, str.size() / 3)) + empty + recursive(str.substr(str.size() / 3 * 2, str.size() / 3));
	}
}

int main()
{
	string str = "";
	int n;

	while (cin >> n)
	{
		for (int i = 0; i < pow(3, n); i++)
		{
			str += '-';
		}

		str = recursive(str);

		cout << str << '\n';

		str = "";
	}
}