#include<iostream>
using namespace std;
int main()
{
	string str, binary = "";
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		int num = str[i] - '0';

		for (int j = 4; j >= 1; j /= 2)
		{
			binary += (num / j) + '0';
			num %= j;
		}
	}

	for (int i = 0; i < 2; i++)
		if (binary[0] == '0')
			binary.erase(binary.begin());

	cout << binary;
}