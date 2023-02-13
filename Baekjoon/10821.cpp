#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int count = 0;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			count++;
	}
	count++;

	cout << count;
}