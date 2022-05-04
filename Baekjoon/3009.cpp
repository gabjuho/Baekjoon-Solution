#include<iostream>
using namespace std;

int returnCoordination(int index,int arr[][2]);
int main()
{
	int arr[3][2] = {};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << returnCoordination(0, arr) << " " << returnCoordination(1, arr);
}
int returnCoordination(int index,int arr[][2])
{
	int temp;
	if (arr[0][index] == arr[1][index])
		temp = arr[2][index];
	else
	{
		if (arr[0][index] == arr[2][index])
			temp = arr[1][index];
		else
			temp = arr[0][index];
	}

	return temp;
}