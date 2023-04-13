#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		if (i == 1)
		{
			l.push_back(i);
			continue;
		}

		list<int>::iterator iter = l.end();
		
		for (int j = 0; j < num; j++)
			iter--;
		
		l.insert(iter, i);
	}

	for (int a : l)
	{
		cout << a << ' ';
	}
}