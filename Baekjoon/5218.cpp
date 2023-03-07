#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;

		cout << "Distances: ";

		for (int j = 0; j < str1.size(); j++)
		{
			if (str1[j] > str2[j])
				cout << str2[j] + 26 - str1[j] << ' ';
			else
				cout << str2[j] - str1[j] << ' ';
		}
		cout << '\n';
	}
}