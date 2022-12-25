#include<iostream>
#include<string>
using namespace std;
int main()
{
	for (int i = 0; i < 100; i++)
	{
		string str;
		int numCount = 0, upperCount = 0, lowerCount = 0, spaceCount = 0;
		getline(cin, str);

		for (int j = 0; j < str.size(); j++)
		{
			if(isspace(str[j]))
				spaceCount++;
			else if (isdigit(str[j]))
				numCount++;
			else if(isupper(str[j]))
				upperCount++;
			else if(islower(str[j]))
				lowerCount++;
		}

		if (lowerCount == 0 && upperCount == 0 && numCount == 0 && spaceCount == 0)
			continue;
		cout << lowerCount << ' ' << upperCount << ' ' << numCount << ' ' << spaceCount << '\n';
	}
}