#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m, n2Count = 0, n5Count = 0, n_m5Count = 0, n_m2Count = 0, m5Count = 0, m2Count = 0;
	cin >> n >> m;

	for (int i = 1; i <= 13; i++)
	{
		n5Count += n / (int)pow(5, i);
		n_m5Count += (n - m) / (int)pow(5, i);
		m5Count += m / (int)pow(5, i);
	}

	for (int i = 1; i <= 30; i++)
	{
		n2Count += n / (int)pow(2, i);
		n_m2Count += (n - m) / (int)pow(2, i);
		m2Count += m / (int)pow(2, i);
	}

	n5Count -= (n_m5Count + m5Count);
	n2Count -= (n_m2Count + m2Count);

	if (n5Count > n2Count)
		cout << n2Count;
	else
		cout << n5Count;
}