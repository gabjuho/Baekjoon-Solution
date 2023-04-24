#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		int m, f;
		cin >> m >> f;

		if (m == 0 && f == 0)
		{
			return 0;
		}

		cout << m + f << '\n';
	}
}