#include<iostream>
using namespace std;
int main() 
{
	char oper;
	string a, b;

	cin >> a;
	cin >> oper;
	cin >> b;

	if (oper == '*')
	{
		b.erase(0, 1);
		a.append(b);
		cout << a;
	}
	else
	{
		if (a.size() < b.size())
		{
			string temp = a;
			a = b;
			b = temp;
		}

		a[a.size() - b.size()] = a[a.size() - b.size()] + 1;
		cout << a;
	}
}