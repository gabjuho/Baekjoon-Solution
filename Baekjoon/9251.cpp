#include<iostream>
using namespace std;

int Max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int** lcs;
	int max = -1;

	string s1, s2;
	cin >> s1 >> s2;

	int maxLength;

	if (s1.length() > s2.length())
		maxLength = s1.length();
	else
		maxLength = s2.length();

	lcs = new int* [maxLength + 1];

	for (int i = 0; i <= maxLength; i++)
		lcs[i] = new int[maxLength + 1];

	for (int i = 0; i <= s1.length(); i++)
	{
		for (int j = 0; j <= s2.length(); j++)
		{
			if (i == 0 || j == 0)
			{
				lcs[i][j] = 0;
				continue;
			}
			else if (s1[i - 1] == s2[j - 1])
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			else
				lcs[i][j] = Max(lcs[i - 1][j], lcs[i][j - 1]);
			if (max < lcs[i][j])
				max = lcs[i][j];
		}
	}

	cout << max;

	for (int i = 0; i < maxLength; i++)
		delete[] lcs[i];

	delete[] lcs;
}