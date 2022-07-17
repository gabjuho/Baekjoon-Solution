#include<iostream>
using namespace std;

int main()
{
	int N, rank = 0;

	cin >> N;

	int** scale = new int*[N];

	for (int i = 0; i < N; i++)
	{
		scale[i] = new int[2];
		cin >> scale[i][0] >> scale[i][1];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (scale[i][0] < scale[j][0] && scale[i][1] < scale[j][1])
				rank++;
		}
		cout << rank + 1<< " ";
		rank = 0;
	}
}