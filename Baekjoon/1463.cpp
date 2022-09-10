#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<pair<int, int>> v, temp;
	bool isOne = false;
	int n;
	cin >> n;

	v.push_back({ n,0 });

	while (1)
	{
		int size = v.size();
		for (int i = 0; i < size; i++)
		{
			if (v[i].first == 1)
			{
				cout << v[i].second;
				return 0;
			}
			if (v[i].first % 3 == 0)
				temp.push_back({ v[i].first / 3, v[i].second + 1 });
			if (v[i].first % 2 == 0)
				temp.push_back({ v[i].first / 2, v[i].second + 1 });
			temp.push_back({ v[i].first - 1, v[i].second + 1 });
		}

		v.clear();
		v = temp;
		temp.clear();
	}
}