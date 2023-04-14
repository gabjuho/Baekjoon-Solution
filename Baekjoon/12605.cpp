#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin >> n;

	getchar();

	for (int i = 1; i <= n; i++)
	{
		stack<string> s;
		string str, temp = "";
		getline(cin, str);

		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == ' ')
			{
				s.push(temp);
				temp = "";
			}
			else
			{
				temp += str[j];
			}
		}

		s.push(temp);

		cout << "Case #" << i << ": ";
		while (!s.empty())
		{
			cout << s.top() << ' ';
			s.pop();
		}
		cout << '\n';
	}
}