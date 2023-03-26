#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int length[3];

	for (int i = 0; i < 3; i++)
		cin >> length[i];
	
	sort(length, length + 3);

	if (length[0] + length[1] > length[2])
	{
		cout << length[0] + length[1] + length[2];
	}
	else
	{
		cout << 2 * (length[0] + length[1]) - 1;
	}
}