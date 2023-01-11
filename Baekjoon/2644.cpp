#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, m;
int a, b;
vector<int> graph[101];
queue<int> visitQ;
int visit[101];

void bfs(int index)
{
	visit[index] = 1;
	visitQ.push(index);

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();
		
		for (int i = 0; i < graph[temp].size(); i++)
		{
			if (visit[graph[temp][i]] == 0)
			{
				visitQ.push(graph[temp][i]);
				visit[graph[temp][i]] = visit[temp] + 1;
			}
		}
	}
}
int main()
{
	cin >> n;
	cin >> a >> b;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[fromNode].push_back(toNode);
		graph[toNode].push_back(fromNode);
	}

	bfs(a);

	if (visit[b] == 0)
		cout << -1;
	else
		cout << visit[b] - 1;
}