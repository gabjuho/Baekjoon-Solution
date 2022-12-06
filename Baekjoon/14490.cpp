#include<iostream>
#include<string>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else return gcd(b, a % b);
}
int main()
{
	string str;
	cin >> str;

	int a = stoi(str.substr(0, str.find(':')));
	int b = stoi(str.substr(str.find(':') + 1, str.size()));

	cout << a / gcd(a, b) << ':' << b / gcd(a, b);
}