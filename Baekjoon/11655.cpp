#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			if (isupper(str[i]))
			{
				if (str[i] + 13 > 'Z')
					str[i] = str[i] + 12 - 'Z' + 'A';
				else
					str[i] += 13;
			}
			else
			{
				if (str[i] + 13 > 'z')
					str[i] = str[i] + 12 - 'z' + 'a';
				else
					str[i] += 13;
			}
		}
	}

	cout << str;
}