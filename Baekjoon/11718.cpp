#include<iostream>
#include<string>
using namespace std;
int main()
{
	for (int i = 0; i < 100; i++)
	{
		string s;
		getline(cin, s);
		cout << s << '\n';
	}
}