#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (1)
	{
		string str;
		cin >> str;

		if (str[0] == '0')
			break;

		int num = 0;
		while (str.size() != 1)
		{
			for (int i = 0; i < str.size(); i++)
				num += str[i] - '0';

			str = to_string(num);
			num = 0;
		}

		cout << str << '\n';
	}
}