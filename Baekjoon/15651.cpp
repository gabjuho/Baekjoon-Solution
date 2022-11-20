#include<iostream>
#include<vector>
using namespace std;

vector<int> v;
int n, m;

void dfs(int count)
{
	if (count == m)
	{
		for (int i = 0; i < m; i++)
			cout << v[i] << ' ';

		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		dfs(count + 1);
		v.pop_back();
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n >> m;

	dfs(0);
}