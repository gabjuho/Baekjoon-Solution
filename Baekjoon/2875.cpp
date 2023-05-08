#include<iostream>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int womenTeam = n / 2;
	int restWomen = 0;
	int restMen = 0;
	int teamCount = 0;

	if (womenTeam > m)
	{
		teamCount = m;
		restWomen = n - 2 * m;
	}
	else
	{
		teamCount = womenTeam;
		restMen = m - womenTeam;
	}

	k -= restWomen;
	k -= restMen;

	if (k <= 0)
	{
		cout << teamCount;
	}
	else
	{
		teamCount -= k / 3;

		if (k % 3 != 0)
		{
			teamCount--;
		}

		cout << teamCount;
	}
}