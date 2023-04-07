#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

map<string, int> words;
vector<pair<string, int>> v;

bool cmp(const pair<string, int>& l, const pair<string, int>& r)
{
	if (l.second > r.second)
	{
		return true;
	}
	else if (l.second == r.second)
	{
		if (l.first.length() > r.first.length())
		{
			return true;
		}
		else if (l.first.length() == r.first.length())
		{
			if (l.first.compare(r.first) < 0)
			{
				return true;
			}
		}
	}
	
	return false;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (str.length() < m)
			continue;

		if (words.count(str) == 0)
		{
			words.insert({str,0});
		}

		words[str]++;
	}

	for (auto it : words)
	{
		v.push_back({ it.first,it.second });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << '\n';
	}
}