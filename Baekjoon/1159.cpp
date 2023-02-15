#include<iostream>
using namespace std;
int main()
{
	int n;
	int player[26] = { 0 };
	bool isNoPlayer = true;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		player[str[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (player[i] >= 5)
		{
			cout << char(i + 'a');
			isNoPlayer = false;
		}
	}

	if (isNoPlayer)
		cout << "PREDAJA";
}