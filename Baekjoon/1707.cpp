#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;

int nodeCount, edgeCount;
vector<int> graph[20001];
int visit[20001];

void bfs(int index)
{
	queue<int> visitQ;

	visitQ.push(index);
	visit[index] = 1;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		int nextNum;
		visitQ.pop();

		if (visit[temp] == 1)
			nextNum = -1;
		else
			nextNum = 1;
		for (int i = 0; i < graph[temp].size(); i++)
		{
			if (visit[graph[temp][i]] == 0)
			{
				visitQ.push(graph[temp][i]);
				visit[graph[temp][i]] = nextNum;
			}
		}
	}
}
bool isBipartiteGraph()
{
	for (int i = 1; i <= nodeCount; i++)
		for (int j = 0; j < graph[i].size(); j++)
			if (visit[i] == visit[graph[i][j]])
				return false;

	return true;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> nodeCount >> edgeCount;
		
		for (int j = 0; j < edgeCount; j++)
		{
			int u, v;
			cin >> u >> v;

			graph[u].push_back(v);
			graph[v].push_back(u);
		}

		for (int j = 1; j <= nodeCount; j++)
			if (visit[j] == 0)
				bfs(j);

		if (isBipartiteGraph())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

		memset(visit, 0, sizeof(visit));
		
		for (int j = 1; j <= nodeCount; j++)
			graph[j].clear();
	}
}