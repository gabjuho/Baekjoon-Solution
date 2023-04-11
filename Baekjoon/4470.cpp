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

		cout << i + 1 << ". " << str << '\n';
	}
}