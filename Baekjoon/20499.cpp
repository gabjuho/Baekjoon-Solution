#include<iostream>
#include<string>
using namespace std;
int main()
{
	string kda, temp = "";
	string stat[3];
	int count = 0;
	cin >> kda; 

	for (int i = 0; i < kda.size(); i++)
	{
		if (kda[i] == '/')
		{
			stat[count] = temp;
			count++;
			temp = "";
			continue;
		}
		
		temp += kda[i];
	}

	stat[2] = temp;

	if (stoi(stat[0]) + stoi(stat[2]) < stoi(stat[1]) || stoi(stat[1]) == 0)
	{
		cout << "hasu";
	}
	else
	{
		cout << "gosu";
	}
}