#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	stack<char> s;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '<')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			cout << '<';

			while (str[++i] != '>')
			{
				cout << str[i];
			}
			cout << '>';
		}
		else if (str[i] == ' ')
		{
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
			cout << ' ';
		}
		else
		{
			s.push(str[i]);
		}
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

}