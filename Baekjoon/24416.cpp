#include<iostream>
using namespace std;

int cnt1 = 1;
int cnt2 = 0;

int fib1(int n);
int fib2(int n);
int main()
{
	int N;
	cin >> N;
	fib1(N);
	fib2(N);
	cout << cnt1 << ' ' << cnt2;
}

int fib1(int n)
{
	
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		cnt1++;
		return fib1(fib1(n - 1) + fib1(n - 2));
	}
}

int fib2(int n)
{
	static int fib[50];

	fib[1] = fib[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		cnt2++;
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	return fib[n];
}