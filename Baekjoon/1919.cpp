#include<iostream>
#include<cmath>
using namespace std;

int alpha1[26], alpha2[26];

int main()
{
	string str1, str2;
	int count = 0;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++)
		alpha1[str1[i] - 'a']++;

	for (int i = 0; i < str2.size(); i++)
		alpha2[str2[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		if (alpha1[i] != alpha2[i])
			count += abs(alpha1[i] - alpha2[i]);

	cout << count;
}