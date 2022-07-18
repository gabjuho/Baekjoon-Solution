#include<iostream>
using namespace std;

int main()
{
	int N, count = 0, num = 666, index = 0, printNum = 0, temp;
	int arr[3] = { -1,-1,-1 };

	cin >> N;

	while (N != count) {
		temp = num;
		while (temp / 10 != 0 || temp != 0) {
			arr[index] = temp % 10;
			temp /= 10;
			index++;
			if (index == 3)
				index = 0;
			if (arr[0] != -1 && arr[1] != -1 && arr[2] != -1)
			{
				if (arr[0] == 6 && arr[1] == 6 && arr[2] == 6)
				{
					count++;
					printNum = num;
					break;
				}
			}
		}
		arr[0] = -1;
		arr[1] = -1;
		arr[2] = -1;
		num += 1;
	}
	cout << printNum;
}