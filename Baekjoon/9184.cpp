#include<iostream>
#include<vector>
using namespace std;

int w(int a, int b, int c);
int arr[21][21][21];

int main()
{
	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a == -1 && b == -1 && c == -1)
			break;

		cout << "w("<< a<<", "<<b<<", "<<c<<") = " << w(a, b, c) << '\n';
	}
}

int w(int a, int b, int c)
{
	if (a>=0 && b>=0 && c>=0 && a<=20 && b<=20 && c<=20 && arr[a][b][c])
		return arr[a][b][c];

	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	else if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	else if (a < b && b < c)
		return arr[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else
		return arr[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}