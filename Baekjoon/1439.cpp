#include<iostream>
using namespace std;
int main()
{
	string str;
	char temp = '2';
	int oneCount = 0, zeroCount = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (temp == str[i])
			continue;

		if (str[i] == '0')
			zeroCount++;
		else
			oneCount++;

		temp = str[i];
	}

	if (oneCount >= zeroCount)
		cout << zeroCount;
	else
		cout << oneCount;
}