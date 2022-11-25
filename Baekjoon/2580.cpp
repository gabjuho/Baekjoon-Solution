#include<iostream>
#include<vector>
using namespace std;

vector<pair<int, int>> v;
bool isDone = false;
int sudoku[9][9];
int zeroCount = 0;

bool isPossible(int num, int count)
{
	for (int i = v[count].first / 3 * 3; i < v[count].first / 3 * 3 + 3; i++)
		for (int j = v[count].second / 3 * 3; j < v[count].second / 3 * 3 + 3; j++)
			if (num == sudoku[i][j])
				return false;

	for (int i = 0; i < 9; i++)
		if (sudoku[v[count].first][i] == num)
			return false;

	for (int i = 0; i < 9; i++)
		if (sudoku[i][v[count].second] == num)
			return false;

	return true;
}

void dfs(int count)
{
	if (isDone)
		return;

	if (count == zeroCount)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				cout << sudoku[i][j] << ' ';
			cout << '\n';
		}
		isDone = true;
		return;
	}

	for (int i = 1; i <= 9; i++)
	{
		if (!isPossible(i, count))
			continue;
		sudoku[v[count].first][v[count].second] = i;
		dfs(count + 1);
		sudoku[v[count].first][v[count].second] = 0;
	}
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sudoku[i][j];
			if (sudoku[i][j] == 0)
			{
				v.push_back({ i,j });
				zeroCount++;
			}
		}
	}

	dfs(0);
}