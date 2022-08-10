#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

unsigned long long combination(unsigned long long n);

int main()
{
	map<unsigned long long, unsigned long long> r_same;
	vector<unsigned long long> v;
	int n, m;
	unsigned long long count = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		v.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		if (i != 0)
			v[i] = v[i] + v[i - 1];

		if (r_same.count(v[i] % m) == 0)
			r_same.insert({ v[i] % m, 1 });
		else
			r_same[v[i] % m]++;

		if(v[i] % m == 0)
			count++;
	}

	for (auto it : r_same)
	{
		if (it.second >= 2)
			count += combination(it.second);
	}

	cout << count;
}

unsigned long long combination(unsigned long long n)
{
	if (n % 2 == 1)
		return n * ((n - 1) / 2);
	else
		return n / 2 * (n - 1);
}