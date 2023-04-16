#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct Info
{
	int country;
	int num;
	int score;
}Info;

bool cmp(Info a, Info b)
{
	if (a.score > b.score)
	{
		return true;
	}
	return false;
}

int main()
{
	vector<Info> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		Info info;
		cin >> info.country >> info.num >> info.score;

		v.push_back(info);
	}

	sort(v.begin(), v.end(), cmp);

	cout << v[0].country << ' ' << v[0].num << '\n';
	cout << v[1].country << ' ' << v[1].num << '\n';

	int i = 2;

	if (v[0].country == v[1].country)
	{
		while (v[i].country == v[0].country)
		{
			i++;
		}
	}
	cout << v[i].country << ' ' << v[i].num << '\n';
}