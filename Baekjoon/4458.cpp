#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;

	getchar();

	for (int i = 0; i < n; i++)
	{
		string str;
		getline(cin, str);

		if (!isupper(str[0]))
			str[0] = toupper(str[0]);

		cout << str <<'\n';
	}

}