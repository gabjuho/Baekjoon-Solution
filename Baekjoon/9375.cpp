#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string, int> m;
	int t, n, total = 1;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			string cloth, clothType;
			cin >> cloth >> clothType;

			if (m.count(clothType) == 0)
				m.insert({ clothType, 1 });
			else
				m[clothType]++;
		}

		for (auto it : m)
			total *= (it.second + 1);
		cout << total - 1 << '\n';

		total = 1;
		m.clear();
	}
}