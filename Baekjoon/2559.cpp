#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n, k, max;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	for (int i = 1; i < n; i++)
		v[i] = v[i - 1] + v[i];

	max = v[k - 1];

	for (int i = 0; i < n - k; i++)
		if (max < v[i + k] - v[i])
			max = v[i + k] - v[i];

	cout << max;
}