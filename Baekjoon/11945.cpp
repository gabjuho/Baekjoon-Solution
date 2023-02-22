#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string bread[10];
	int n, m;
	cin >> n >> m;


	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> bread[i];
		reverse(bread[i].begin(), bread[i].end());
	}

	for (int i = 0; i < n; i++)
	{
		cout << bread[i] << '\n';
	}

	
}