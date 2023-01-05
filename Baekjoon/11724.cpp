#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int n, m;
vector<int> graph[1001];
queue<int> visitQ;
bool visit[1001];

void bfs(int index)
{
	visitQ.push(index);
	visit[index] = true;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (int i = 0; i < graph[temp].size(); i++)
		{
			if (!visit[graph[temp][i]])
			{
				visit[graph[temp][i]] = true;
				visitQ.push(graph[temp][i]);
			}
		}
	}
}

int main()
{
	int count = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[fromNode].push_back(toNode);
		graph[toNode].push_back(fromNode);
	}

	for (int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			count++;
			bfs(i);
		}
	}

	cout << count;
}