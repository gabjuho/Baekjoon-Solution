#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (1)
	{
		string str = "";
		int n, sum = 0;
		cin >> n;

		if (n == -1)
			return 0;

		str += to_string(n) + " = ";
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				str += to_string(i) + " + ";
			}
		}

		str.erase(str.end() - 3, str.end());

		if (sum == n)
		{
			cout << str << '\n';
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
}