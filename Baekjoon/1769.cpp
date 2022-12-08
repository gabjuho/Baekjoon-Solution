#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sum = 0, count = 0;
	string num;
	cin >> num;

	while (num.size() != 1)
	{
		sum = 0;
		for (int i = 0; i < num.size(); i++)
			sum += (num[i] - '0');
		num = to_string(sum);

		count++;
	}

	sum = stoi(num);

	cout << count << '\n';

	if (sum % 3 == 0)
		cout << "YES";
	else
		cout << "NO";
}