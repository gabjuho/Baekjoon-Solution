#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str1, str2, temp1, temp2;
		cin >> str1 >> str2;

		temp1 = str1;
		temp2 = str2;

		sort(temp1.begin(), temp1.end());
		sort(temp2.begin(), temp2.end());

		if (temp1 == temp2)
			cout << str1 << " & " << str2 << " are anagrams." << '\n';
		else
			cout << str1 << " & " << str2 << " are NOT anagrams." << '\n';
	}
}