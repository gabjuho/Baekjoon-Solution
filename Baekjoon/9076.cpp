#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		vector<int> v;
		for (int j = 0; j < 5; j++)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}

		sort(v.begin(), v.end());

		if (v[3] - v[1] >= 4)
			cout << "KIN\n";
		else
			cout << v[1] + v[2] + v[3] << "\n";
	}
}