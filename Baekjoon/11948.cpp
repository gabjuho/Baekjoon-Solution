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

	sort(arr, arr + 4);

	int sum = arr[1] + arr[2] + arr[3];

	int sub1, sub2;
	cin >> sub1 >> sub2;

	if (sub1 > sub2)
	{
		sum += sub1;
	}
	else
	{
		sum += sub2;
	}

	cout << sum;
}