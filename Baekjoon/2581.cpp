#include<iostream>
using namespace std;

bool isPrimeNum(int num);

int main()
{
	int M, N, min = 0, sum = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (isPrimeNum(i))
		{
			if (sum == 0)min = i;
			sum += i;
		}

	}
	if (min != 0)
		cout << sum << endl << min;
	else
		cout << -1;
}
bool isPrimeNum(int num)
{
	if (num == 1)
		return false;

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)return false;
	}
	return true;

}