#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> vec;
	int n, v, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	cin >> v;

	for (int i = 0; i < n; i++)
		if (vec[i] == v)
			count++;

	cout << count;
}