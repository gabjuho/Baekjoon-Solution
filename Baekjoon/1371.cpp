#include<iostream>
#include<string>
using namespace std;
int main()
{
	int alpha[26] = { 0 };
	int maxIndex = 0;
	for (int i = 0; i < 50; i++)
	{
		string str;
		getline(cin, str);

		for (int j = 0; j < str.size(); j++)
		{
			if (isalpha(str[j]))
				alpha[str[j] - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++)
		if (alpha[maxIndex] < alpha[i])
			maxIndex = i;

	for (int i = 0; i < 26; i++)
	{
		if (alpha[maxIndex] == alpha[i])
			cout << (char)(i + 'a');
	}
}