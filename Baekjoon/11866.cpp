#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> q, temp;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push_back(i);

	cout << "<";

	while (q.size() != 1)
	{
		if (q.size() >= k)
		{
			for (int i = 1; i <= k - 1; i++)
			{
				temp.push_back(q.front());
				q.pop_front();
			}
			cout << q.front() << ", ";
			q.pop_front();
			for (int i = 1; i <= k - 1; i++)
			{
				q.push_back(temp.front());
				temp.pop_front();
			}
		}
		else
		{
			if (k % q.size() == 0)
			{
				cout << q.back() << ", ";
				q.pop_back();
			}
			else
			{
				int size1 = k % q.size() - 1;
				for (int i = 1; i <= size1; i++)
				{
					temp.push_back(q.front());
					q.pop_front();
				}
				cout << q.front() << ", ";
				q.pop_front();
				int size2 = temp.size();
				for (int i = 1; i <= size2; i++)
				{
					q.push_back(temp.front());
					temp.pop_front();
				}
			}
		}
	}
	cout << q.back();
	cout << ">";
}