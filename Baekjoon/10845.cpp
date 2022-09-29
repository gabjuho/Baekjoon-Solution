#include<queue>
#include<iostream>
using namespace std;
int main()
{
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (command == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (command == "size")
		{
			cout << q.size() << '\n';
		}
		else if (command == "empty")
		{
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (command == "front")
		{
			if (!q.empty())
				cout << q.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (command == "back")
		{
			if (!q.empty())
				cout << q.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}
}