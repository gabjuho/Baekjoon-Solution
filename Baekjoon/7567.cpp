#include<iostream>
using namespace std;
int main()
{
	string str;
	int height = 0;
	cin >> str;

	height += 10;
	
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] != str[i + 1])
			height += 10;
		else
			height += 5;
	}

	cout << height;
}