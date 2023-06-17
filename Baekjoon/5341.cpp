#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			break;
		}

		cout << num * (num + 1) / 2 << '\n';
	}
}