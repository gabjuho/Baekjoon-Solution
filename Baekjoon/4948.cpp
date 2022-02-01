#include<iostream>
using namespace std;

void printPrimeNum(int num);
int main()
{
	int num;
	
	while(1)
	{
		cin >> num;
		if (num == 0)
			break;
		printPrimeNum(num);
	}

}

void printPrimeNum(int num)
{
	int* arr = new int[2 * num + 1];
	int count = 0;

	for (int i = 2; i <= 2 * num; i++)
		arr[i] = 0;

	for (int i = 2; i <= num; i++)
	{
		if (arr[i] == 1) continue;
		for (int j = i * 2; j <= num * 2; j += i)
			arr[j] = 1;
	}

	for (int i = num + 1; i <= num * 2; i++)
	{
		if (arr[i] == 0)
			count++;
	}

	cout << count << endl;
}