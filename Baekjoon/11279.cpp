#include<iostream>
#include<queue>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	priority_queue<int> q;
	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x > 0)
			q.push(x);
		else if (x == 0)
		{
			if (!q.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else
				cout << 0 << '\n';
		}
	}
}