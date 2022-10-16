#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		cout << s[0] - '0' + s[2] - '0' << '\n';
	}
}