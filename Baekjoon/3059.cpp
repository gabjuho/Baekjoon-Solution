#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		cin >> str;
		for (int j = 'A'; j <= 'Z'; j++)
			if (str.find(j) == string::npos)
				sum += j;

		cout << sum << '\n';
	}
}