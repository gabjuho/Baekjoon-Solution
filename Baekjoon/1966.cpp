#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<pair<int,int>> q, temp;
	bool isMax = true;
	int t, n, m;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			q.push({ num, i});
		}
		int count = 0;
		
		while (q.size() != 0)
		{
			temp = q;
			int size = q.size();
			pair<int,int> max = q.front();
			q.pop();
			for (int i = 1; i < size; i++)
			{
				if (max.first < q.front().first)
				{
					temp.push(temp.front());
					temp.pop();
					q = temp;
					isMax = false;
					break;
				}
				else
					q.pop();
			}
			if (isMax)
			{
				count++;
				temp.pop();
				q = temp;
				
				if (max.second == m)
				{
					cout << count << '\n';
					q = queue<pair<int, int>>();
					temp = queue<pair<int, int>>();
					break;
				}
			}
			isMax = true;
		}
		isMax = true;
		count = 0;
	}
}