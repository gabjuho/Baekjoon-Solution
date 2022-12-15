#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (1)
	{
		string str;
		int count = 0;
		getline(cin, str);

		if (str == "#")
			break;

		for (int i = 0; i < str.size(); i++)
		{
			str[i] = tolower(str[i]);
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				count++;
		}

		cout << count << '\n';
	}
}