#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int sum = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
		sum += str[i] - '0';

	sort(str.begin(), str.end(),greater<char>());

	if (str[str.size() - 1] == '0' && sum % 3 == 0)
		cout << str;
	else
		cout << -1;
}