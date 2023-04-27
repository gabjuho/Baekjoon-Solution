#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string str;
	int sum = 0;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
		{
			sum += (str[i] - '0') * pow(16, str.size() - i - 1);
		}
		else
		{
			sum += (str[i] - 'A' + 10) * pow(16, str.size() - i - 1);
		}
	}

	cout << sum;
}