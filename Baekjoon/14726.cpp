#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		int sum = 0;
		cin >> str;

		for (int j = str.size() - 1; j >= 0; j--)
		{
			int num = str[j] - '0';
			if (j % 2 == 0)
			{
				num *= 2;

				if (num >= 10)
					num = (num / 10) + (num % 10);
			}

			sum += num;
		}

		if (sum % 10 == 0)
			cout << 'T' << '\n';
		else
			cout << 'F' << '\n';
	}
}