#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	vector<int> v;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n + m; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
}