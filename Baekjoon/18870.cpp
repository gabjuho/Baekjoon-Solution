#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v,temp;
	int N, num;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		v.push_back(num);
	}
	
	temp = v;
	sort(temp.begin(), temp.end());

	temp.erase(unique(temp.begin(), temp.end()),temp.end()); // erase구문에서 범위 주어줘야 그 구간내에 원소들이 삭제됨

	for (int i = 0; i < N; i++)
	{
		auto it = lower_bound(temp.begin(), temp.end(), v[i]);
		printf("%d ", it - temp.begin());
	}
}