#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int n, int from, int temp, int to);

int main()
{
	int n;
	cin >> n;
	cout << (long long)pow(2, n) - 1 << '\n';
	hanoi(n, 1, 2, 3);
}

void hanoi(int n, int from, int temp, int to)
{

	if (n == 1)
		cout << from << ' ' << to << '\n';
	else
	{
		hanoi(n - 1, from, to, temp);
		cout << from << ' ' << to << '\n';
		hanoi(n - 1, temp, from, to);
	}
}