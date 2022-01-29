#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num, size;

	cin >> num;
	if (num != 1)
	{
		size = num / 2;

		for (int i = 2; i <= size; i++)
		{
			if (num % i == 0 && num != i)
			{
				num /= i;
				cout << i << endl;
				i = 1;
			}
		}
		cout << num;
	}

}