#include<iostream>
#include<set>
using namespace std;

set<string> s;
int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (str == "ENTER")
		{
			s.clear();
			continue;
		}
		if (s.count(str) == 0)
		{
			s.insert(str);
			count++;
		}
	}

	cout << count;
}