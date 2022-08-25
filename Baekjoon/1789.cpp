#include<iostream>
using namespace std;
int main()
{
	long long n, sum = 0, count = 0, i = 1;

	cin >> n;

	while (n >= sum)
	{
		sum += i;
		count++;
		i++;
	}

	cout << count - 1;
}