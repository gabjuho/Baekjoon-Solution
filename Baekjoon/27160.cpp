#include<iostream>
#include<map>
using namespace std;

map<string, int> m;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		int num;
		cin >> str >> num;

		if (m.count(str) != 0)
		{
			m[str] += num;
		}
		else
		{
			m.insert({ str,num });
		}
	}

	for (auto i : m)
	{
		if (i.second == 5)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}