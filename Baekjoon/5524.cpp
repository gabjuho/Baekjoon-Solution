#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		
		for (int j = 0; j < str.size(); j++)
			str[j] = tolower(str[j]);

		cout << str << '\n';
	}
}