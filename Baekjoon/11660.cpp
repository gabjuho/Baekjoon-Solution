#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<vector<int>> v;

	int n, m, sum = 0;
	cin >> n >> m;

	v.assign(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int num;
			cin >> num;
			v[i][j] = num;

			if (j != 0)
				v[i][j] = v[i][j] + v[i][j - 1];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1 - 1; i <= x2 - 1; i++)
		{
			if (y1 - 1 != 0)
				sum += v[i][y2 - 1] - v[i][y1 - 2];
			else
				sum += v[i][y2 - 1];
		}
		cout << sum << ' ';
		sum = 0;
	}
}