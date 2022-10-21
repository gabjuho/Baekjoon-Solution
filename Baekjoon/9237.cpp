#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	int n, sum = 0, max = -1;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;

		v.push_back(t);
	}

	sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < n; i++)
		if (max < v[i] + i + 1)
			max = v[i] + i + 1;
	
	cout << max + 1;
}