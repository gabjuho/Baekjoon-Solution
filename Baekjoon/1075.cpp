#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	int f;
	cin >> n;
	cin >> f;

	n = n.substr(0, n.size() - 2);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			string temp = n;
			temp += to_string(i);
			temp += to_string(j);

			int num = stoi(temp);

			if (num % f == 0)
			{
				cout << i << j;
				return 0;
			}
		}
	}
}