#include<iostream>
#include<set>
using namespace std;

set<string> s;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str1, str2;

		cin >> str1 >> str2;

		if (str1 == "ChongChong" || str2 == "ChongChong")
		{
			s.insert(str1);
			s.insert(str2);
		}
		else
		{
			if (s.count(str1) != 0 || s.count(str2) != 0)
			{
				s.insert(str1);
				s.insert(str2);
			}
		}
	}

	cout << s.size();
}