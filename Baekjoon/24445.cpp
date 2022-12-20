#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100001];
queue<int> visitQ;
int visit[100001];
int n, m, r;
int count = 1;

void bfs(int index)
{
	visitQ.push(index);
	visit[index] = ::count++;

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (vector<int>::iterator iter = graph[temp].begin(); iter!=graph[temp].end();iter++)
		{
			if (visit[*iter] != 0)
				continue;
			visitQ.push(*iter);
			visit[*iter] = ::count++;
		}
	}
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

	bfs(r);

	for (int i = 1; i <= n; i++)
		cout << visit[i] << '\n';
}