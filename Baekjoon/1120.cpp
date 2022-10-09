#include<iostream>
using namespace std;
int main()
{
	string a, b;
	int max = -1, count = 0;
	cin >> a >> b;

	for (int i = 0; i <= b.length() - a.length(); i++)
	{
		for (int j = i; j < a.length() + i; j++)
		{
			if (b[j] == a[j - i])
				count++;
		}

		if (max < count)
			max = count;

		count = 0;
	}

	cout << a.length() - max;
}