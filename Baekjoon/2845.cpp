#include<iostream>
using namespace std;
int main()
{
	int l, n, sum = 0;
	cin >> l >> n;

	sum = l * n;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;

		cout << num - sum << ' ';
	}
}