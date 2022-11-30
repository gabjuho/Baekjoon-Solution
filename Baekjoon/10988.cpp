#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string str, reverseStr;
	cin >> str;

	reverseStr = str;
	reverse(reverseStr.begin(), reverseStr.end());

	if (str == reverseStr)
		cout << 1;
	else
		cout << 0;
	
}