#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		vector<int> v;
		int n, maxGap = -1;
		cin >> n;
		
		for (int j = 0; j < n; j++)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());

		for (int j = 0; j < n - 1; j++)
		{
			if (v[j + 1] - v[j] > maxGap)
				maxGap = v[j + 1] - v[j];
		}

		cout << "Class " << i + 1 << '\n';
		cout << "Max " << v[n - 1] << ", Min " << v[0] << ", Largest gap " << maxGap << '\n';
	}
}