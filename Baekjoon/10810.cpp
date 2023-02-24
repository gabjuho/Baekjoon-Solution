#include<iostream>
using namespace std;
int main()
{
	int bucket[101] = { 0 };
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int start, end, ball;
		cin >> start >> end >> ball;

		for (int j = start; j <= end; j++)
			bucket[j] = ball;
	}

	for (int i = 1; i <= n; i++)
		cout << bucket[i] << ' ';
}