#include<iostream>
using namespace std;
int main()
{
	int count = 0, n;
	string str;

	cin >> n;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'S')
		{
			count++;
		}
		else if (str[i] == 'L')
		{
			count++;
			i += 1;
		}
	}

	count++;

	if (n < count)
		cout << n;
	else
		cout << count;
}