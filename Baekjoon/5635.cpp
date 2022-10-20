#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Birthday
{
public:
	Birthday(string name, int day, int month, int year) :name(name), day(day), month(month), year(year) {}
	string name;
	int day;
	int month;
	int year;
};

bool cmp(Birthday a, Birthday b)
{
	if (a.year < b.year)
		return true;
	else if (a.year == b.year)
	{
		if (a.month < b.month)
			return true;
		else if (a.month == b.month)
		{
			if (a.day < a.day)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

int main()
{
	vector<Birthday> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		int day;
		int month;
		int year;

		cin >> name >> day >> month >> year;

		v.push_back(Birthday(name, day, month, year));
	}

	sort(v.begin(), v.end(), cmp);

	cout << v[n - 1].name << '\n';
	cout << v[0].name << '\n';
}