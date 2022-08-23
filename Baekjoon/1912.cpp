#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	int n, max = -100010001, temp = -100000001;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (temp + num < num)
			temp = num;
		else
			temp += num;
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
			max = v[i];
	}

	cout << max;
}