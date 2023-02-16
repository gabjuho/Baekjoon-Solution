#include<iostream>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;

	if (str1.size() >= str2.size())
		cout << "go";
	else
		cout << "no";
}