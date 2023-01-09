#include<iostream>
using namespace std;
int main()
{
	string str;
	int count = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			count++;
	}

	cout << count;
}