#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, sum = 2;
	cin >> n;

	for(int i = 1; i <= n; i++)
		sum += pow(2, i - 1);

	cout << (int)pow(sum, 2);
}