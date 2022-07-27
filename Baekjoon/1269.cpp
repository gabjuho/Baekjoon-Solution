#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	set<int>aSet;
	set<int>bSet;

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, count = 0;
	cin >> A >> B;
	
	for (int i = 0; i < A; i++)
	{
		int num;
		cin >> num;
		aSet.insert(num);
	}

	for (int i = 0; i < B; i++)
	{
		int num;
		cin >> num;
		bSet.insert(num);
	}

	for (int num : bSet)
		if (aSet.find(num) == aSet.end())
			count++;

	for (int num : aSet)
		if (bSet.find(num) == bSet.end())
			count++;

	cout << count;
}