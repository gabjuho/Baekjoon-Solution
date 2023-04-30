#include<iostream>
using namespace std;
int main()
{
	int maxIndex, maxScore = -1;

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int num;
			cin >> num;

			sum += num;
		}

		if (maxScore < sum)
		{
			maxScore = sum;
			maxIndex = i + 1;
		}
	}

	cout << maxIndex << ' ' << maxScore;
}