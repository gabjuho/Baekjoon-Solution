#include<iostream>
#include<vector>
using namespace std;

int dnaArr[50][4];
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<string> v;
	int index, sum = 0;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string DNA;
		cin >> DNA;
		v.push_back(DNA);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((v[j])[i] == 'A')
				dnaArr[i][0]++;
			else if ((v[j])[i] == 'C')
				dnaArr[i][1]++;
			else if ((v[j])[i] == 'G')
				dnaArr[i][2]++;
			else if ((v[j])[i] == 'T')
				dnaArr[i][3]++;
		}
		int max = -1;
		for (int j = 0; j < 4; j++)
		{
			if (max < dnaArr[i][j])
			{
				max = dnaArr[i][j];
				index = j;
			}
		}
		sum += (n - max);
		if(index == 0)
			cout << 'A';
		else if (index == 1)
			cout << 'C';
		else if (index == 2)
			cout << 'G';
		else if (index == 3)
			cout << 'T';
	}

	cout << '\n' << sum;
}