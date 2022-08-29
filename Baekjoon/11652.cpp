#include<iostream>
#include<map>
using namespace std;
int main()
{
	map <long long, int> m;
	int n, max = -1;
	long long maxIndex;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long num;
		cin >> num;
		if (m.count(num) == 0)
			m.insert({ num, 1 });
		else
			m[num] ++;
	}

	for (auto it : m)
	{
		if (max < it.second)
		{
			max = it.second;
			maxIndex = it.first;
		}
	}

	cout << maxIndex;
}