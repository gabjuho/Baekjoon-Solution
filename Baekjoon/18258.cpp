#include<iostream>
#include<queue>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (command == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (command == "size")
		{
			cout << q.size() << '\n';
		}
		else if (command == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (command == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (command == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}