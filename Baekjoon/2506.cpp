#include<iostream>
using namespace std;
int main()
{
	bool isRow = true;
	int n, plusScore = 1, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			isRow = false;
			plusScore = 1;
		}
		else if(isRow && num == 1)
		{
			sum += plusScore;
			plusScore++;
		}
		else if(!isRow && num == 1)
		{
			isRow = true;
			sum += plusScore;
			plusScore++;
		}
	}

	cout << sum;
}