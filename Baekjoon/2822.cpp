#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	vector<pair<int, int>> v;
	vector<int> temp;
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		int num;
		cin >> num;
		v.push_back({ num,i + 1 });
	}

	sort(v.begin(), v.end());

	for (int i = 7; i >= 3; i--)
		sum += v[i].first;

	cout << sum << '\n';

	for (int i = 3; i <= 7; i++)
		temp.push_back(v[i].second);

	sort(temp.begin(), temp.end());

	for (int i = 0; i < temp.size(); i++)
		cout << temp[i] << " ";
}