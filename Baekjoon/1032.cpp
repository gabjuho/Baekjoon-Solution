#include<iostream>
using namespace std;
int main()
{
	string str[50];
	string pattern = "";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> str[i];

	for (int i = 0; i < str[0].size(); i++)
	{
		bool isEqual = true;

		for (int j = 0; j < n - 1; j++)
		{
			if (str[j][i] == str[j + 1][i])
				isEqual = true;
			else
			{
				isEqual = false;
				break;
			}
		}

		if (isEqual)
			pattern += str[0][i];
		else
			pattern += '?';
	}

	cout << pattern;
}