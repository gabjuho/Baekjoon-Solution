#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


	set<string> nameSet; //µè ¸í´Ü
	vector<string> nameVec; //µèº¸Àâ ¸í´Ü
	int N, M;
	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;

		nameSet.insert(name);
	}

	for (int i = 0; i < M; i++)
	{
		string name;
		cin >> name;

		if (nameSet.find(name) != nameSet.end())
			nameVec.push_back(name);
	}

	sort(nameVec.begin(),nameVec.end());

	cout << nameVec.size() << '\n';

	for (int i = 0; i < nameVec.size(); i++)
		cout << nameVec[i] << '\n';
}