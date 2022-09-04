#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> dq;
	int n, m, count = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;

		for (int j = 0; j < dq.size(); j++)
		{
			if (dq[j] != num)
				continue;

			if (j < dq.size() - j)
			{
				for (int k = 0; k < j; k++)
				{
					dq.push_back(dq.front());
					dq.pop_front();
					count++;
				}
				dq.pop_front();
			}
			else
			{
				for (int k = 0; k < dq.size() - j; k++)
				{
					dq.push_front(dq.back());
					dq.pop_back();
					count++;
				}
				dq.pop_front();
			}
			break;
		}
	}

	cout << count;
}