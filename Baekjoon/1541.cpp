#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, temp = "";
	int sum = 0;
	bool hasMinus = false, hasPlus = false;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
		{
			if (hasMinus)
			{
				sum -= stoi(temp);
				hasMinus = true;
			}
			else
			{
				sum += stoi(temp);
				hasMinus = true;
			}
			temp.clear();
		}
		else if (str[i] == '+')
		{
			if (hasMinus)
				sum -= stoi(temp);
			else
				sum += stoi(temp);
			temp.clear();
		}
		else
		{
			temp += str[i];
		}
	}

	if (hasMinus)
		sum -= stoi(temp);
	else
		sum += stoi(temp);

	cout << sum;
}