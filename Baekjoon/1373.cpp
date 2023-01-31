#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	string str, eight = "";
	cin >> str;

	for (int i = str.size() - 1; i >= 0; i-=3)
	{
		int sum = 0;

		sum += str[i] - '0';
		if(i - 1 >= 0)
			sum += (str[i - 1] - '0') * 2;
		if (i - 2 >= 0)
			sum += (str[i - 2] - '0') * 2 * 2;

		eight += sum + '0';
	}

	reverse(eight.begin(), eight.end());

	cout << eight;
}