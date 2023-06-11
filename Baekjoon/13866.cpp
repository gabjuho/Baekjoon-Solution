#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[4];
	
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	
	cout << abs((arr[3] + arr[0]) - (arr[2] + arr[1]));
}