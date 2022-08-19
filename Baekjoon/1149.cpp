#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v, temp;
	int n, min = 1000001;
	cin >> n;

	for (int j = 0; j < 3; j++)
	{
		int num;
		cin >> num;

		v.push_back(num);
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int num;
			cin >> num;
			temp.push_back(num);
		}

		if (v[0] <= v[1])
			temp[2] += v[0];
		else
			temp[2] += v[1];
		
		if (v[0] <= v[2])
			temp[1] += v[0];
		else
			temp[1] += v[2];
		
		if (v[1] <= v[2])
			temp[0] += v[1];
		else
			temp[0] += v[2];

		v.clear();
		v = temp;
		temp.clear();
	}

	for (int i = 0; i < 3; i++)
		if (min > v[i])
			min = v[i];

	cout << min;
}