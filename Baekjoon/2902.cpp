#include<iostream>
using namespace std;
int main()
{
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
		if (str[i] != '-' && isupper(str[i]))
			cout << str[i];
}