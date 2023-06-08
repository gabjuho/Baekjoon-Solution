#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> score;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		score.push_back(num);
	}

	sort(score.begin(), score.end());

	cout << score[n - 1] - score[0];
}