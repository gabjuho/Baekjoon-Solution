#include<iostream>
using namespace std;
int main()
{
	string n;
	int sum1 = 0, sum2 = 0;
	cin >> n;

	for (int i = 0; i < n.size(); i++)
	{
		if (i < n.size() / 2)
			sum1 += n[i] - '0';
		else 
			sum2 += n[i] - '0';
	}

	if (sum1 == sum2)
		cout << "LUCKY";
	else
		cout << "READY";
}