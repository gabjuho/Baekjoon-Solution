#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin >> t;

	getchar();
	for (int i = 0; i < t; i++)
	{
		string str;
		getline(cin, str);

		stack<char> s;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == ' ')
			{
				int size = s.size();
				for (int k = 0; k < size; k++)
				{
					cout << s.top();
					s.pop();
				}
				cout << ' ';
			}
			else
				s.push(str[j]);
		}

		int size = s.size();
		for (int k = 0; k < size; k++)
		{
			cout << s.top();
			s.pop();
		}
		cout << ' ';
		cout << '\n';
	}

}