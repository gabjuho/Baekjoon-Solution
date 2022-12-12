#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	queue<int> children;
	priority_queue<int> present;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		present.push(num);
	}

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		children.push(num);
	}

	while (1)
	{
		if (children.empty())
		{
			cout << 1;
			break;
		}

		if (present.top() >= children.front())
		{
			int temp = present.top() - children.front();
			present.pop();
			present.push(temp);

			children.pop();
		}
		else
		{
			cout << 0;
			break;
		}
	}
}