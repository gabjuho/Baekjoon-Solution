#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		int num1, num2;

		cin >> num1 >> num2;

		cout << "Case " << i << ": " << num1 + num2 << '\n';
	}
}