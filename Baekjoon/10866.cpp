#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> dq;
	string command;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> command;

		if (!command.compare("push_back"))
		{
			int num;
			cin >> num;

			dq.push_back(num);
		}
		else if (!command.compare("push_front"))
		{
			int num;
			cin >> num;

			dq.push_front(num);
		}
		else if (!command.compare("front"))
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.front() << '\n';
		}
		else if (!command.compare("back"))
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
				cout << dq.back() << '\n';
		}
		else if (!command.compare("size"))
		{
			cout << dq.size() << '\n';
		}
		else if (!command.compare("empty"))
		{
			cout << dq.empty() << '\n';
		}
		else if (!command.compare("pop_front"))
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (!command.compare("pop_back"))
		{
			if (dq.empty())
				cout << -1 << '\n';
			else
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
	}
}