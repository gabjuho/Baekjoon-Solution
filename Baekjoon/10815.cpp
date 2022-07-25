#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v, compare;
	int N,M;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);
		compare.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < M; i++)
		printf("%d ", binary_search(v.begin(), v.end(), compare[i]));
}