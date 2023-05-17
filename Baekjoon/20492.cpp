#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	cout << (int)(n * (1 - 0.22)) << ' ' << (int)((n * 0.8) + (n * 0.2)*(1 - 0.22));
}