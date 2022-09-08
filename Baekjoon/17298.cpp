#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	stack<pair<int, int>> s;
	int n, index = 0;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (s.empty() || s.top().first >= num)
		{
			s.push({ num,index++ });
		}
		else
		{
			while (!s.empty() && s.top().first < num)
			{
				v[s.top().second] = num;
				s.pop();
			}
			s.push({ num,index++ });
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
			cout << -1 << ' ';
		else
			cout << v[i] << ' ';
	}
}