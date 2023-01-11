#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[300001];
queue<int> visitQ;
int visit[300001];
int m, n, k, x;

void bfs(int index)
{
	visitQ.push(index);
	visit[index] = 1;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (int i = 0; i < graph[temp].size(); i++)
		{
			if (visit[graph[temp][i]] == 0)
			{
				visit[graph[temp][i]] = visit[temp] + 1;
				visitQ.push(graph[temp][i]);
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	bool isNoPath = true;
	cin >> n >> m >> k >> x;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[fromNode].push_back(toNode);
	}

	bfs(x);

	for (int i = 1; i <= n; i++)
	{
		if (visit[i] - 1 == k)
		{
			cout << i << '\n';
			isNoPath = false;
		}
	}

	if(isNoPath)
		cout << -1;
}