#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	bool noFBI = true;
	int count = 1;

	for (int i = 0; i < 5; i++)
	{
		string fbi;
		cin >> fbi;

		for (int i = 0; i < fbi.size() - 3 + 1; i++)
		{
			if (fbi.substr(i, 3) == "FBI")
			{
				v.push_back(count);
				noFBI = false;
				break;
			}
		}

		count++;
	}

	if (noFBI)
		cout << "HE GOT AWAY!";
	else
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
	}
}