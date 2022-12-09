#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	while (1)
	{
		string str;
		getline(cin,str);

		if (str == "END")
			break;

		reverse(str.begin(), str.end());

		cout << str << '\n';
	}
}