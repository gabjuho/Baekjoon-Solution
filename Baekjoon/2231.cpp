#include<iostream>
using namespace std;

int makeSum(int n);

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		if (makeSum(i) == n)
		{
			cout << i;
			n = -1;
			break;
		}
	}

	if (n != -1)
		cout << 0;
}

int makeSum(int n)
{
	int sum = 0;
	sum += n; //자기 자신 더하기
	while (n / 10 != 0) 
	{
		sum += n % 10;
		n /= 10;
	}
	sum += n; //가장 첫째 자리수 더하기
	return sum;
}