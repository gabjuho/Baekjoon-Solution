#include<iostream>
using namespace std;

string num;
int count[10];
int main()
{
	int max = -1;
	cin >> num;

	for (int i = 0; i < num.size(); i++)
		::count[num[i] - '0']++;

	for (int i = 0; i < 10; i++)
		if (max < ::count[i] && i != 6 && i != 9)
			max = ::count[i];

	int temp = ::count[6] + ::count[9];
	
	if (temp % 2 == 0)
		temp /= 2;
	else
		temp = temp / 2 + 1;

	if (max < temp)
		max = temp;

	cout << max;
}