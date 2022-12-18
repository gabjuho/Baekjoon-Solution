#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> graph[100001];
int visit[100001];
int n, m, r;
int count = 1;

void dfs(int index)
{
	visit[index] = ::count++;

	for (vector<int>::iterator iter = graph[index].begin(); iter != graph[index].end(); iter++)
		if (visit[*iter] == 0)
			dfs(*iter);
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m >> r;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[fromNode].push_back(toNode);
		graph[toNode].push_back(fromNode);
	}

	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end(), greater<int>());

	dfs(r);

	for (int i = 1; i <= n; i++)
		cout << visit[i] << '\n';
}