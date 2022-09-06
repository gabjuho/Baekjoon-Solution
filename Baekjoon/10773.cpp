#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;

	int k, sum = 0;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		if (num != 0)
		{
			s.push(num);
			sum += num;
		}
		else
		{
			sum -= s.top();
			s.pop();
		}
	}
	cout << sum;
}