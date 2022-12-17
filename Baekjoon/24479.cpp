#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> graph[100001];
int visit[100001];
int count = 1;
int n, m, r;

void dfs(int index)
{
	visit[index] = ::count++;

	for (vector<int>::iterator iter = graph[index].begin(); iter != graph[index].end(); iter++)
	{
		if (visit[*iter] == 0)
			dfs(*iter);
	}
}

int main()
{
	scanf("%d %d %d", &n, &m, &r);


	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		scanf("%d %d",&fromNode, &toNode);
		
		graph[fromNode].push_back(toNode);
		graph[toNode].push_back(fromNode);
	}

	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end());

	dfs(r);

	for (int i = 1; i <= n; i++)
		printf("%d\n", visit[i]);
}