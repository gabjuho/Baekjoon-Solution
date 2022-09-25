#include<queue>
#include<iostream>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, less<int>> minus_q;
	priority_queue<int, vector<int>, greater<int>> plus_q; //greater는 오름차순, less는 내림차순
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > 0)
			plus_q.push(x);
		else if (x < 0)
			minus_q.push(x);
		else
		{
			if (plus_q.empty() && !minus_q.empty())
			{
				cout << minus_q.top() << '\n';
				minus_q.pop();
			}
			else if (!plus_q.empty() && minus_q.empty())
			{
				cout << plus_q.top() << '\n';
				plus_q.pop();
			}
			else if (!plus_q.empty() && !minus_q.empty())
			{
				if (plus_q.top() < minus_q.top() * -1)
				{
					cout << plus_q.top() << '\n';
					plus_q.pop();
				}
				else if (plus_q.top() >= minus_q.top() * -1)
				{
					cout << minus_q.top() << '\n';
					minus_q.pop();
				}
			}
			else
				cout << 0 << '\n';
		}
	}
}