#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> arr;
	int n, m, sum = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		arr.push_back(num);
	}

	for (int i = 1; i < n; i++)
		arr[i] = arr[i - 1] + arr[i];

	for (int i = 0; i < m; i++)
	{
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		if (n1 == 1)
			printf("%d\n", arr[n2 - 1]);
		else
			printf("%d\n", arr[n2 - 1] - arr[n1 - 2]);
	}
}