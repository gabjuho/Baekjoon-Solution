#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

vector<int> v;
bool checkV[9];
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
		if (checkV[i])
			continue;
		checkV[i] = true;
		v.push_back(i);
		dfs(count + 1);
		v.pop_back();
		checkV[i] = false;
	}
}
int main()
{
	cin >> n >> m;
	memset(checkV, false, 9);

	dfs(0);
}