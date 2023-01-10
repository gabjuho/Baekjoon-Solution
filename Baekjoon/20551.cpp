#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;

int binary_search(int num)
{
	int start = 0;
	int end = v.size() - 1;

	while (start < end)
	{
		int mid = (start + end) / 2;

		if (num <= v[mid])
			end = mid;
		else
			start = mid + 1;
	}
	
	if (v[start] != num)
		return -1;
	return start;
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
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		int d;
		cin >> d;

		cout << binary_search(d) << '\n';
	}
}