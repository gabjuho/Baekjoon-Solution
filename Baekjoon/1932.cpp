#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v, temp;
	int n, index = 0, count = 0, max = -1;
	cin >> n;

	int num1;
	cin >> num1;
	v.push_back(num1);

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int num2;
			cin >> num2;

			temp.push_back(num2 + v[index]);
			count++;

			if (count == 2 && (j != 0 && j != v.size()))
			{
				index++;
				count = 1;
				if (v[index] + num2 > temp[j])
					temp[j] = v[index] + num2;
			}
		}
		index = 0;
		count = 0;
		v.clear();
		v = temp;
		temp.clear();
	}

	for (int i = 0; i < v.size(); i++)
		if (max < v[i])
			max = v[i];

	cout << max;
}