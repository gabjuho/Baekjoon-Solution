#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, index = 0;
		bool isReverse = false, isError = false;
		string p, x, temp;
		deque<int> dq;
		cin >> p;
		cin >> n;
		cin >> x;
		for (int j = 0; j < x.size(); j++)
		{
			if (isdigit(x[j]))
			{
				temp += x[j];
			}
			else if (x[j] == ',' || x[j] == ']')
			{
				if (temp.empty())
					continue;
				dq.push_back(stoi(temp));
				temp.clear();
			}
		}

		for (int j = 0; j < p.size(); j++)
		{
			if (p[j] == 'R')
			{
				if (isReverse)
					isReverse = false;
				else
					isReverse = true;
			}
			else if (p[j] == 'D')
			{
				if (dq.size() <= 0)
				{
					cout << "error\n";
					isError = true;
					break;
				}
				if (isReverse)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}

		if (isError)
			continue;
		cout << '[';
		if (isReverse)
		{
			if (dq.size() > 0)
			{
				for (int j = dq.size() - 1; j >= 1; j--)
					cout << dq[j] << ',';
				cout << dq[0];
			}
		}
		else
		{
			if (dq.size() > 0)
			{
				for (int j = 0; j < dq.size() - 1; j++) //이거 if문 위로 빼면 dq.size()가 0일 때 돌아가는 문제가 생김 (이유 불명)
					cout << dq[j] << ',';
				cout << dq[dq.size() - 1];
			}
		}
		cout << "]\n";
	}
}