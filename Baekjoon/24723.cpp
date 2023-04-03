#include<iostream>
using namespace std;
int main()
{
	int n, sum = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		sum *= 2;
	}

	cout << sum;
}