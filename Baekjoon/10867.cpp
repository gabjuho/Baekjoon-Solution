#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		s.insert(num);
	}

	for (int it : s)
	{
		cout << it << ' ';
	}
}