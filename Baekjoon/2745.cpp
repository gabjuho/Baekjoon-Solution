#include<iostream>
using namespace std;
int main()
{
	string str;
	int n, sum = 0, count = 1;

	cin >> str >> n;

	for (int i = str.size() - 1; i >= 0; i--)
	{
		if (isalpha(str[i]))
			sum += count * (str[i] - 'A' + 10);
		else
			sum += count * (str[i] - '0');

		count *= n;
	}

	cout << sum;
	
}