#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string, vector<int>> a, pair<string, vector<int>> b)
{
	if (a.second[0] > b.second[0])
		return true;
	else if (a.second[0] == b.second[0])
	{
		if (a.second[1] < b.second[1])
			return true;
		else if (a.second[1] == b.second[1])
		{
			if (a.second[2] > b.second[2])
				return true;
			else if (a.second[2] == b.second[2])
			{
				if (a.first < b.first)
					return true;
				else
					return false;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

int main()
{
	vector <pair<string, vector<int>>> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		int korean, english, math;
		cin >> name >> korean >> english >> math;
		v.push_back({ name,{korean,english,math} });
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
		cout << v[i].first << '\n';
}