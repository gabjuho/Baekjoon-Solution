#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> a, b;
	int n, sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());

	sort(b.begin(), b.end(), greater<>());

	for (int i = 0; i < n; i++)
		sum += a[i] * b[i];

	cout << sum;
}