#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int fibo(int n);
int main()
{
	v.push_back(1);
	v.push_back(2);

	int n;
	cin >> n;

	cout << fibo(n);
}

int fibo(int n)
{
	for (int i = 2; i < n; i++)
		v.push_back((v[i - 2] + v[i - 1]) % 15746);

	return v[n - 1];
}