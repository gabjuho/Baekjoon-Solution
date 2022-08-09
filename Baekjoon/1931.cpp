#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int second_comp(pair<unsigned int, unsigned int> a, pair<unsigned int, unsigned int> b);

int main()
{
	vector<pair<unsigned int, unsigned int>> v;
	int n, count = 1;
	unsigned int endTime;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		unsigned int start, end;
		cin >> start >> end;
		if(start <= end)
			v.push_back(pair<unsigned int, unsigned int> (start,end));
	}
	
	sort(v.begin(), v.end(), second_comp);
	endTime = v[0].second;
	v.erase(v.begin());

	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first >= endTime)
		{
			endTime = v[i].second;
			count++;
		}
	}

	cout << count;
}

int second_comp(pair<unsigned int, unsigned int> a, pair<unsigned int, unsigned int> b)
{
	if (a.second < b.second)
		return 1;
	else if (a.second == b.second && a.first < b.first)
		return 1;
	else
		return 0;
}