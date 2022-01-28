#include<iostream>
using namespace std;
// 여러 수를 입력하고 그 중 소수의 개수 구하기


bool isPrimeNumber(int num);

int main()
{
	int T, num, primeNum = 0;
	
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> num;
		if (isPrimeNumber(num))
		{
			primeNum++;
		}
	}
	cout << primeNum;
}

bool isPrimeNumber(int num)
{
	if (num == 1)return false;
	
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)return false;
	}

	return true;
}