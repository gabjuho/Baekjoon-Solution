#include<iostream>
using namespace std;
int main()
{
	int num;
	int count[2] = { 0,0 };
	string str;
	cin >> num;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'A')
			count[0]++;
		else
			count[1]++;
	}

	if (count[0] > count[1])
		cout << 'A';
	else if (count[0] == count[1])
		cout << "Tie";
	else
		cout << 'B';
	
}