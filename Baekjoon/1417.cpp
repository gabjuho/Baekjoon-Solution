#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int>,less<int>> pq;
int main()
{
	int n, origin, temp = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (i == 0)
		{
			origin = num;
		}
		else
		{
			pq.push(num);
		}
	}

	temp = origin;

	if (pq.size() == 0)
	{
		cout << 0;
		return 0;
	}

	while (pq.top() >= temp)
	{
		temp++;
		int top = pq.top();
		pq.pop();
		top--;
		pq.push(top);
	}

	cout << temp - origin;
}