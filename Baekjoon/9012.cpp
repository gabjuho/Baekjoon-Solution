#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		stack<char> s;
		string str;
		cin >> str;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
				s.push(str[i]);
			else if (str[i] == ')' && !s.empty() && s.top() == '(')
				s.pop();
			else
			{
				s.push(str[i]);
				break;
			}
		}
		if (s.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}

}