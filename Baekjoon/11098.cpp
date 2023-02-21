#include<iostream>
#include<map>
using namespace std;

map<int, string, greater<int>> m;
int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		for (int j = 0; j < n; j++)
		{
			int price;
			string name;
			cin >> price >> name;
			m.insert({ price,name });
		}

		cout << (*(m.begin())).second << '\n';

		m.clear();
	}
}