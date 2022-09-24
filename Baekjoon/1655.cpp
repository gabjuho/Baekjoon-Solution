#include<iostream>
#include<queue>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	priority_queue<int, vector<int>, less<int>> q_small;
	priority_queue<int, vector<int>, greater<int>> q_big;
	int n;
	cin >> n;

	int first;
	cin >> first;
	q_small.push(first);
	cout << q_small.top() << '\n';

	for (int i = 1; i < n; i++)
	{
		int num;
		cin >> num;

		if ((i + 1) % 2 == 0) //값을 넣은 후 원소 개수가 짝수일 때
		{
			if (q_small.top() > num)
			{
				q_big.push(q_small.top());
				q_small.pop();
				q_small.push(num);
			}
			else
				q_big.push(num);
		}
		else //원소 개수 홀수
		{
			if (q_big.top() < num)
			{
				q_small.push(q_big.top());
				q_big.pop();
				q_big.push(num);
			}
			else
				q_small.push(num);
		}
		cout << q_small.top() << '\n';
	}
}