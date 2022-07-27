#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int, int> num_map;

	int N, M;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		if (num_map.find(num) == num_map.end())
			num_map.insert({ num, 1 });
		else
			num_map[num]++;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int num;
		scanf("%d", &num);

		if (num_map.find(num) == num_map.end())
			printf("%d ", 0);
		else
			printf("%d ",num_map[num]);
	}


}