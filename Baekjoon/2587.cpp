#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	int avg = 0;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		avg += num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << avg / 5 << '\n' << v[2];
}