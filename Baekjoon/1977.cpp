#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m, powNum = 1, min = -1;
	int sum = 0;
	cin >> m >> n;

	powNum = floor(sqrt(m));
	
	if (m > powNum * powNum)
	{
		powNum++;
	}

	for (int i = m; i <= n; i++)
	{
		if (i == powNum * powNum)
		{
			sum += i;
			powNum++;
			if (min == -1)
				min = i;
		}
	}

	if (sum == 0)
		cout << -1;
	else
	{
		cout << sum << '\n' << min;
	}

}