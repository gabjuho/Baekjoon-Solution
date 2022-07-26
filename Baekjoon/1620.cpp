#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
	unordered_map<int,string> myBook;
	unordered_map<string, int> myReverseBook;

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);


	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		string pokemonName;
		cin >> pokemonName;
		myBook.insert({i, pokemonName });
	}

	for_each(myBook.begin(), myBook.end(), [&myReverseBook](const pair<int, string>& p)
		{
			myReverseBook.insert(make_pair(p.second, p.first));
		});

	for (int i = 0; i < M; i++)
	{
		int pNum;
		string pStr;

		if (cin >> pNum)
		{
			cout << myBook.find(pNum)->second << '\n';
		}
		else
		{
			cin.clear();
			cin >> pStr;

			cout << myReverseBook.find(pStr)->second << '\n';
		}
	}
}