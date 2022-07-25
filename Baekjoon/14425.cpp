#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> v, compare;
	int N, M, count = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		v.push_back(str);
	}

	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;

		compare.push_back(str);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++)
	{
		if (binary_search(v.begin(), v.end(), compare[i]))
			count++;
	}

	cout << count;
}