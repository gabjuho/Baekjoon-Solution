#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> v;

	string str;
	int len;
	cin >> str;
	len = str.length();

	for (int i = 0; i < len; i++)
	{
		v.push_back(str);
		str.erase(str.begin());
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}
}