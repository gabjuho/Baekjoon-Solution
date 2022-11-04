#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string,int> a, pair<string, int> b)
{
	return a.second > b.second;
}

int main()
{
	vector<pair<string, int>> v;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			string name;
			int alcohol;
			cin >> name >> alcohol;
			v.push_back({ name,alcohol });
		}
		sort(v.begin(), v.end(), cmp);
		cout << v[0].first << '\n';
		v.clear();
	}
}