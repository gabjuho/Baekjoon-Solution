#include<iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;

	cout << (a + b) * (abs(b - a) + 1) / 2;
}