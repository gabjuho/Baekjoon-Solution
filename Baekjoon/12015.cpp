#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (i != 0 && num <= v.back())
		{
			*(lower_bound(v.begin(), v.end(), num)) = num;
			continue;
		}

		v.push_back(num);
	}

	cout << v.size();
}