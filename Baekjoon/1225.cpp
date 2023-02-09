#include<iostream>
using namespace std;
int main()
{
	string str1, str2;
	long long sum1 = 0, sum2 = 0;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++)
		sum1 += str1[i] - '0';

	for (int i = 0; i < str2.size(); i++)
		sum2 += str2[i] - '0';

	cout << sum1 * sum2;
}