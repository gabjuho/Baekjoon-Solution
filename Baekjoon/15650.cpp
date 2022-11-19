#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int n, m;
bool visit[9];
vector<int> v;

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
		if (visit[i] || (count - 1 >= 0 && v[count - 1] >= i))
			continue;

		visit[i] = true;
		v.push_back(i);

		dfs(count + 1);

		visit[i] = false;
		v.pop_back();
	}
}

int main()
{
	cin >> n >> m;
	memset(visit, false, 9);

	dfs(0);
}