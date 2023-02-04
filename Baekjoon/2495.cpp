#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		string str;
		int count = 1, max = 1;

		cin >> str;

		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == str[i + 1])
			{
				count++;
			}
			else
			{
				if (max < count)
					max = count;
				count = 1;
			}
		}

		if (max < count)
			max = count;

		cout << max << '\n';
	}
}