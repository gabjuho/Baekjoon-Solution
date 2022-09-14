#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b)
{
	if (a.first < b.first)
		return true;
	else if (a.first == b.first)
	{
		return a.second > b.second;
	}
	else
		return false;
}
int main()
{
	map<string, int> m;
	vector<pair<int,string>> v;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string title;
		cin >> title;

		if (m.count(title) == 0)
			m.insert({ title, 1 });
		else
			m[title]++;
	}

	for (auto it : m)
		v.push_back({ it.second,it.first });

	sort(v.begin(), v.end(), cmp);

	cout << v[v.size() - 1].second;
}