#include<iostream>
#include<vector>
using namespace std;

vector<long long> v;
long long P(int n);
int main()
{
	for (int i = 0; i < 3; i++)
		v.push_back(1);

	int n, t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << P(n) << '\n';
		v.clear();
		for (int i = 0; i < 3; i++)
			v.push_back(1);
	}
}

long long P(int n)
{
	for (int i = 3; i < n; i++)
	{
		v.push_back(v[i - 3] + v[i - 2]);
	}
	return v[n - 1];
}