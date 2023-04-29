#include<iostream>
using namespace std;
int main()
{
	int album, average;
	
	cin >> album >> average;

	cout << album * (average - 1) + 1;
}