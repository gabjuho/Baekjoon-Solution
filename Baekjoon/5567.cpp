#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[501];
queue<int> visitQ;
int visit[501];
int n, m;

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
				visitQ.push(graph[temp][i]);
				visit[graph[temp][i]] = visit[temp] + 1;
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int count = 0;
	cin >> n;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	bfs(1);

	for (int i = 2; i <= n; i++)
		if (visit[i] != 0 && visit[i] - 1 <= 2)
			count++;

	cout << count;
}