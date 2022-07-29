#include<iostream>
using namespace std;
int main()
{
	int max = 1, min = 1000000, N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (min > num)
			min = num;
		if (max < num)
			max = num;
	}

	cout << max * min;
}