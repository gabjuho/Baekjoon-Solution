#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;

		if (!command.compare("push"))
		{
			int num;
			cin >> num;

			s.push(num);
		}
		else if (!command.compare("pop"))
		{
			if (s.empty())
				cout << "-1\n";
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (!command.compare("size"))
		{
			cout << s.size() << '\n';
		}
		else if (!command.compare("empty"))
		{
			cout << s.empty() << '\n';
		}
		else if (!command.compare("top"))
		{
			if (s.empty())
				cout << "-1\n";
			else
				cout << s.top() << '\n';
		}

	}
}