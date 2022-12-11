#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string x, y;

	cin >> x >> y;

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	int sum = stoi(x) + stoi(y);

	string sumStr = to_string(sum);

	reverse(sumStr.begin(), sumStr.end());

	sum = stoi(sumStr);
	cout << sum;
}