#include<iostream>
#include<math.h>
using namespace std;

void printPartition(int num);
bool isPrimeNum(int num);

int main()
{
	int T, num;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> num;
		printPartition(num);
	}
}

void printPartition(int num)
{
	int start = num / 2;

	for (int i = num/2; i >=1; i--)
	{
		if (isPrimeNum(i) && isPrimeNum(start))
		{
			cout << i << " " << start << endl;
			break;
		}
		start++;
	}
}
bool isPrimeNum(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}