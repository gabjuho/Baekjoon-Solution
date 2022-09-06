#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	while (1)
	{
		stack<char> s;
		string str;
		getline(cin, str);

		if (!str.compare("."))
			break;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			else if (str[i] == ')' && !s.empty() && s.top() == '(')
				s.pop();
			else if (str[i] == ']' && !s.empty() && s.top() == '[')
				s.pop();
			else if ((str[i] == ']' && s.empty()) || (str[i] == ']' && s.top() != '['))
			{
				s.push(str[i]);
				break;
			}
			else if ((str[i] == ')' && s.empty()) || (str[i] == ')' && s.top() != '('))
			{
				s.push(str[i]);
				break;
			}
		}
		if (s.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}

}