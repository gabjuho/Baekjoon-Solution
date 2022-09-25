#include<iostream>
#include<queue>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	priority_queue<int, vector<int>, greater<int>> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x != 0)
			q.push(x);
		else
		{
			if (q.empty())
				cout << 0 << '\n';
			else
			{
				cout << q.top() << '\n';
				q.pop();
			}
		}
	}
}