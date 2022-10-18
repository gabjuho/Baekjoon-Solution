#include<iostream>
using namespace std;

char arr[26];
int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		arr[s[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		cout << (int)arr[i] << ' ';
}