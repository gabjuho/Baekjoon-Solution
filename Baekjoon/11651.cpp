#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
	if (a.second < b.second)
		return true;
	else if (a.second == b.second && a.first < b.first)
		return true;

	return false;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(pair<int, int>(a, b));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", v[i].first, v[i].second);
	}
}