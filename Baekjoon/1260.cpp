#include<iostream>
#include<queue>
using namespace std;

queue<int> visitQ;
bool graph[1001][1001];
bool visitDFS[1001];
bool visitBFS[1001];
int n, m, v;

void dfs(int index)
{
	cout << index << ' ';
	visitDFS[index] = true;
	for (int i = 1; i <= n; i++)
	{
		if (!visitDFS[i] && index != i && graph[index][i])
			dfs(i);
	}
}
void bfs(int index)
{
	visitQ.push(index);
	visitBFS[index] = true;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		cout << temp << ' ';

		for (int i = 1; i <= n; i++)
		{
			if (!visitBFS[i] && temp != i && graph[temp][i])
			{
				visitQ.push(i);
				visitBFS[i] = true;
			}
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;
		
		graph[fromNode][toNode] = true;
		graph[toNode][fromNode] = true;
	}

	dfs(v);
	cout << '\n';
	bfs(v);
}