#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	sum = v[0];

	for (int i = 1; i < n; i++)
	{
		v[i] = v[i] + v[i - 1];
		sum += v[i];
	}

	cout << sum;
}