#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string num, rev;
		cin >> num;
		rev = num;
		
		reverse(rev.begin(), rev.end());

		int temp = stoi(num) + stoi(rev);

		num = to_string(temp);
		rev = num;
		
		reverse(rev.begin(), rev.end());

		if (num == rev)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}