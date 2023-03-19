#include<iostream>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;

	if (str1.size() < str2.size())
	{
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}

	for (int i = 0; i < str1.size(); i++)
	{
		if (i >= str1.size() - str2.size())
			cout << str1[i] - '0' + str2[i - (str1.size() - str2.size())] - '0';
		else
			cout << str1[i];
	}
}