#include<iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string password;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> password;
		if (password.size() >= 6 && password.size() <= 9)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}