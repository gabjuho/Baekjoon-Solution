#include<iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	string s;
	bool firstI = false;
	int n, m, count = 0, sum = 0;
	cin >> n >> m;
	cin >> s;

	for (int i = 0; i < m; i++)
	{
		if (!firstI && s[i] == 'I')
			firstI = true;
		else if (firstI && s[i - 1] == 'I')
		{
			if (s[i] == 'I')
			{
				if (count >= n)
					sum += count - n + 1;
				count = 0;
			}
		}
		else if (firstI && s[i - 1] == 'O')
		{
			if (s[i] == 'I')
				count++;
			else
			{
				if (count >= n)
					sum += count - n + 1;
				count = 0;
				firstI = false;
			}
		}
	}

	if (count >= n)
		sum += count - n + 1;

	cout << sum;
}