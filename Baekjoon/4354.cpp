#include<iostream>
using namespace std;

int pi[1000001];
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1)
	{
		string str;
		int j = 0;
		cin >> str;

		if (str[0] == '.')
			return 0;

		for (int i = 1; i < str.size(); i++)
		{
			while (j > 0 && str[i] != str[j])
			{
				j--;
			}

			if (str[j] == str[i])
			{
				pi[i] = ++j;
			}
			else
			{
				pi[i] = 0;
			}
		}
		int patterLen = str.size() - pi[str.size() - 1];

		if (str.size() % patterLen == 0)
		{
			cout << str.size() / patterLen << '\n';
		}
		else
		{
			cout << 1 << '\n';
		}
	}
}