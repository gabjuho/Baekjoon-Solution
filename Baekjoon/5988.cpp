#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string num;
		cin >> num;

		if ((num[num.size() - 1] - '0') % 2 == 0)
			cout << "even" << '\n';
		else
			cout << "odd" << '\n';
	}
}