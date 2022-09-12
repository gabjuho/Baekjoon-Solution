#include<iostream>
#include<set>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	set<int> s;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		s.insert(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		if (s.count(num))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
}