#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string, string> map;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string address, password;
		cin >> address >> password;
		map.insert({ address, password });
	}

	for (int i = 0; i < m; i++)
	{
		string address;
		cin >> address;
		cout << map[address] << '\n';
	}
}