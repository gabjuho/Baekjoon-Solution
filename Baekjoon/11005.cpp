#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	int n, b;
	cin >> n >> b;

	while (n / b != 0)
	{
		s.push(n % b);
		n /= b;
	}

	s.push(n);

	while (!s.empty())
	{
		if (s.top() > 9)
		{
			cout << char('A' + s.top() - 10);
		}
		else
		{
			cout << s.top();
		}
		s.pop();
	}
}