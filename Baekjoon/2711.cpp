#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		int index;
		cin >> index >> str;

		for (int j = 0; j < str.size(); j++)
		{
			if (j == index - 1)
				continue;
			cout << str[j];
		}
		cout << '\n';
	}
}