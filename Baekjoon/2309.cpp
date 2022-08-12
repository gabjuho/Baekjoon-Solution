#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int sum = 0, tempSum = 0;
	
	for (int i = 0; i < 9; i++)
	{
		int height;
		cin >> height;
		sum += height;

		v.push_back(height);
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			tempSum += v[i] + v[j];
			if (tempSum == sum - 100)
			{
				v.erase(v.begin() + j);
				v.erase(v.begin() + i);
				break;
			}
			tempSum = 0;
		}
		if (v.size() == 7)
			break;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 7; i++)
		cout << v[i] << '\n';
}