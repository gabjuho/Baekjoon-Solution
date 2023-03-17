#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		
		if (stoi(str.substr(2, str.size() - 2)) <= 90)
			count++;
	}

	cout << count;
}