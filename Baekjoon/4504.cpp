#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	while(1)
	{
		int num;
		cin >> num;
		if (num == 0)
			break;

		if (num % n == 0)
		{
			cout << num << " is a multiple of " << n << ".\n";
		}
		else
		{
			cout << num << " is NOT a multiple of " << n << ".\n";
		}
	}
}