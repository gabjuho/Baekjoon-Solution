#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int m, n, h;
int graph[100][100][100];
queue<tuple<int,int,int>> visitQ;

void bfs()
{
	while (!visitQ.empty())
	{
		tuple<int, int, int> temp = visitQ.front();
		visitQ.pop();

		if (get<0>(temp) - 1 >= 0 && graph[get<0>(temp) - 1][get<1>(temp)][get<2>(temp)] == 0)
		{
			visitQ.push({ get<0>(temp) - 1, get<1>(temp), get<2>(temp) });
			graph[get<0>(temp) - 1][get<1>(temp)][get<2>(temp)] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
		if (get<0>(temp) + 1 < h && graph[get<0>(temp) + 1][get<1>(temp)][get<2>(temp)] == 0)
		{
			visitQ.push({ get<0>(temp) + 1, get<1>(temp), get<2>(temp) });
			graph[get<0>(temp) + 1][get<1>(temp)][get<2>(temp)] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
		if (get<1>(temp) - 1 >= 0 && graph[get<0>(temp)][get<1>(temp) - 1][get<2>(temp)] == 0)
		{
			visitQ.push({ get<0>(temp), get<1>(temp) - 1, get<2>(temp) });
			graph[get<0>(temp)][get<1>(temp) - 1][get<2>(temp)] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
		if (get<1>(temp) + 1 < n && graph[get<0>(temp)][get<1>(temp) + 1][get<2>(temp)] == 0)
		{
			visitQ.push({ get<0>(temp), get<1>(temp) + 1, get<2>(temp) });
			graph[get<0>(temp)][get<1>(temp) + 1][get<2>(temp)] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
		if (get<2>(temp) - 1 >= 0 && graph[get<0>(temp)][get<1>(temp)][get<2>(temp) - 1] == 0)
		{
			visitQ.push({ get<0>(temp), get<1>(temp), get<2>(temp) - 1 });
			graph[get<0>(temp)][get<1>(temp)][get<2>(temp) - 1] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
		if (get<2>(temp) + 1 < m && graph[get<0>(temp)][get<1>(temp)][get<2>(temp) + 1] == 0)
		{
			visitQ.push({ get<0>(temp), get<1>(temp), get<2>(temp) + 1 });
			graph[get<0>(temp)][get<1>(temp)][get<2>(temp) + 1] = graph[get<0>(temp)][get<1>(temp)][get<2>(temp)] + 1;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	bool isAllRipe = true, isCantRipe = true;
	int max = -1;

	cin >> m >> n >> h;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> graph[i][j][k];
				if (graph[i][j][k] == 1)
				{
					visitQ.push({ i,j,k });
					isCantRipe = false;
				}
				else if (graph[i][j][k] == 0)
					isAllRipe = false;
			}
		}
	}

	if (isAllRipe)
	{
		cout << 0;
		return 0;
	}
	if (isCantRipe)
	{
		cout << -1;
		return 0;
	}

	bfs();

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (max < graph[i][j][k])
					max = graph[i][j][k];

				if (graph[i][j][k] == 0)
				{
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << max - 1;
}