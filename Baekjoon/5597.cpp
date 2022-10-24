#include<iostream>
using namespace std;

bool arr[30];

int main()
{
	for (int i = 0; i < 28; i++)
	{
		int num;
		cin >> num;
		arr[num - 1] = true;
	}

	for (int i = 0; i < 30; i++)
		if (!arr[i])
			cout << i + 1 << '\n';
			
}