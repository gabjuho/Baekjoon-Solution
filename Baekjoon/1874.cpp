#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
int main()
{
	queue<int> q, num_q;
	stack<int> s;
	vector<char> v;
	int n, max = -1;
	bool isNo = false;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		q.push(num);
		num_q.push(i);
	}
	int q_size = q.size();
	int num_q_size = num_q.size();

	for (int i = 0; i < q_size; i++)
	{
		if (max < q.front())
		{
			for (int j = 0; j < num_q_size; j++)
			{
				if (num_q.front() == q.front())
				{
					v.push_back('+');
					v.push_back('-');
					num_q.pop();
					break;
				}
				s.push(num_q.front());
				num_q.pop();
				v.push_back('+');
			}
			max = q.front();
			q.pop();
		}
		else
		{
			if (q.front() == s.top())
			{
				s.pop();
				q.pop();
				v.push_back('-');
			}
			else
			{
				cout << "NO";
				isNo = true;
				break;
			}
		}
	}

	if (isNo)
		return 0;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}
}