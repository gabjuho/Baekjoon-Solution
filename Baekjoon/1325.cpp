#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>

using namespace std;
vector<int> graph[10001];
vector<int> maxNode;
queue<int> visitQ;
bool visit[10001];

int n, m, cnt;

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
				visitQ.push(graph[temp][i]);
				visit[graph[temp][i]] = true;
				cnt++;
			}
		}
	}
}


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int max = -1;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[toNode].push_back(fromNode);
	}

	for (int i = 1; i <= n; i++)
	{
		bfs(i);
		if (max < cnt)
		{
			maxNode.clear();
			max = cnt;
			maxNode.push_back(i);
		}
		else if (max == cnt)
			maxNode.push_back(i);

		cnt = 0;
		memset(visit, false, sizeof(visit));
	}

	for (int i = 0; i < maxNode.size(); i++)
		cout << maxNode[i] << ' ';
}