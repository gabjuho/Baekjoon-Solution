#include<iostream>
#include<queue>
using namespace std;

int graph[101];
int movePoint[101];
queue<int> visitQ;
int n, m;

void bfs()
{
	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		if (temp == 100)
			break;

		for (int i = 1; i <= 6; i++)
		{
			if (temp + i <= 100 && graph[temp + i] == 0)
			{
				int movePos = temp + i;
				if (movePoint[movePos] != 0)
				{
					if (graph[movePoint[movePos]] == 0)
					{
						movePos = movePoint[movePos];
						graph[movePos] = graph[temp] + 1;
						visitQ.push(movePos);
					}
				}
				else
				{
					graph[movePos] = graph[temp] + 1;
					visitQ.push(movePos);
				}
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		movePoint[x] = y;
	}

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		movePoint[x] = y;
	}

	graph[1] = 1;
	visitQ.push(1);

	bfs();

	cout << graph[100] - 1;
}