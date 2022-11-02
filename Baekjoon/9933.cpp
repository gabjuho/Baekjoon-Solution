#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	set<string> s;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (s.count(str) == 0)
			s.insert(str);
		else
		{
			cout << str.size() << ' ' << str[str.size() / 2];
			break;
		}
		reverse(str.begin(), str.end());
		if (s.count(str) != 0)
		{
			cout << str.size() << ' ' << str[str.size() / 2];
			break;
		}
	}
}