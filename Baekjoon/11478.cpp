#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<string> strSet;

	int index = 0;
	string s;
	cin >> s;

	for (int i = 1; i <= s.length(); i++)
		for (int j = 0; j <= s.length() - i; j++)
			strSet.insert(s.substr(j, i));

	cout << strSet.size();
}