#include<iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int joi = 0;
	int ioi = 0;
	
	for (int i = 0; i < str.size() - 2; i++)
	{
		if (str.substr(i, 3) == "JOI")
			joi++;
		else if (str.substr(i, 3) == "IOI")
			ioi++;
	}

	cout << joi << '\n' << ioi;
}