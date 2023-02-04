#include<iostream>
#include<stack>
using namespace std;

int main()
{
	while (1)
	{
		int num;
		cin >> num;

		if (num == 0)
			break;

		stack<int> s;
		for (int i = 0; i < num; i++)
		{
			int height;
			cin >> height;

			
			if (!s.empty() && height <= s.top())
			{

			}
		}
	}
}