#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string, string> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name, state;
		cin >> name >> state;
		if (m.count(name) == 0)
			m.insert({ name,state });
		else
			m[name] = state;
	}

	for (map<string, string>::reverse_iterator iter = m.rbegin(); iter != m.rend(); iter++)
		if (iter->second == "enter")
			cout << iter->first << '\n';
}