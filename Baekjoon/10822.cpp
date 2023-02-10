#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, sumStr = "";
	int num = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
			sumStr += str[i];
		else
		{
			num += stoi(sumStr);
			sumStr.clear();
		}
	}

	num += stoi(sumStr);

	cout << num;
}