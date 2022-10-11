#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h;
		cin >> h;

		while (!s.empty() && h >= s.top())
			s.pop();

		s.push(h);
	}

	cout << s.size();
}