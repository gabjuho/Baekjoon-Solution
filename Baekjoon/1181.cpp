#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string a, string b);

int main()
{
	int N;
	string temp;
	cin >> N;

	string* arr = new string[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N, compare);

	temp = arr[0];
	cout << arr[0] << endl;

	for (int i = 1; i < N; i++)
	{
		if (temp.compare(arr[i]) != 0)
		{
			cout << arr[i] << endl;
			temp = arr[i];
		}
	}
}

bool compare(string a, string b)
{
	if (a.length() < b.length())
		return true;
	else if (a.length() == b.length() && a.compare(b) < 0)
		return true;

	return false;
}