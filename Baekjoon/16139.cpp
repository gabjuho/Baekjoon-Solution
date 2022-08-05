#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int q;
	string s;

	cin >> s;
	cin >> q;

	vector<vector<int>> v;
	v.assign(s.length(), vector<int>(26, 0));

	v[0][s[0] % 97]++;

	for (int i = 1; i < s.length(); i++)
	{
		v[i][s[i] % 97] ++;
		for (int j = 0; j < 26; j++)
			v[i][j] += v[i - 1][j];
	}

	for (int i = 0; i < q; i++)
	{
		char alpha;
		int start, end;
		cin >> alpha >> start >> end;
		if (start != 0)
			printf("%d\n", v[end][alpha % 97] - v[start - 1][alpha % 97]);
		else
			printf("%d\n", v[end][alpha % 97]);
	}

}