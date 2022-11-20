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
		if (count - 1 >= 0 && v[count - 1] > i)
			continue;

		v.push_back(i);

		dfs(count + 1);
		
		v.pop_back();
	}
}

int main()
{
	cin >> n >> m;

	dfs(0);
}