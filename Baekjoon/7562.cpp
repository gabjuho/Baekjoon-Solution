#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int graph[300][300];
queue<pair<int,int>> visitQ;
int l;
pair<int, int> startPos, endPos;

void bfs(pair<int,int> pos)
{
	graph[pos.first][pos.second] = 1;
	visitQ.push(pos);

	while (!visitQ.empty())
	{
		pair<int, int> temp = visitQ.front();
		visitQ.pop();

		if (temp.first == endPos.first && temp.second == endPos.second)
			break;

		if (temp.first - 2 >= 0 && temp.second - 1 >= 0 && graph[temp.first - 2][temp.second - 1] == 0)
		{
			graph[temp.first - 2][temp.second - 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first - 2, temp.second - 1 });
		}
		if (temp.first - 1 >= 0 && temp.second - 2 >= 0 && graph[temp.first - 1][temp.second - 2] == 0)
		{
			graph[temp.first - 1][temp.second - 2] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first - 1, temp.second - 2 });
		}
		if (temp.first + 2 < l && temp.second - 1 >= 0 && graph[temp.first + 2][temp.second - 1] == 0)
		{
			graph[temp.first + 2][temp.second - 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first + 2, temp.second - 1 });
		}
		if (temp.first + 1 < l && temp.second - 2 >= 0 && graph[temp.first + 1][temp.second - 2] == 0)
		{
			graph[temp.first + 1][temp.second - 2] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first + 1, temp.second - 2 });
		}
		if (temp.first - 2 >= 0 && temp.second + 1 < l && graph[temp.first - 2][temp.second + 1] == 0)
		{
			graph[temp.first - 2][temp.second + 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first - 2, temp.second + 1 });
		}
		if (temp.first - 1 >= 0 && temp.second + 2 < l && graph[temp.first - 1][temp.second + 2] == 0)
		{
			graph[temp.first - 1][temp.second + 2] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first - 1, temp.second + 2 });
		}
		if (temp.first + 2 < l && temp.second + 1 < l && graph[temp.first + 2][temp.second + 1] == 0)
		{
			graph[temp.first + 2][temp.second + 1] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first + 2, temp.second + 1 });
		}
		if (temp.first + 1 < l && temp.second + 2 < l && graph[temp.first + 1][temp.second + 2] == 0)
		{
			graph[temp.first + 1][temp.second + 2] = graph[temp.first][temp.second] + 1;
			visitQ.push({ temp.first + 1, temp.second + 2 });
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> l;
		cin >> startPos.first >> startPos.second;
		cin >> endPos.first >> endPos.second;
		
		bfs(startPos);

		cout << graph[endPos.first][endPos.second] - 1 << '\n';

		for (int j = 0; j < l; j++)
			memset(graph[j], 0, sizeof(graph[j]));

		while (!visitQ.empty())
			visitQ.pop();
	}
}