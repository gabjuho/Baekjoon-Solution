#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[100001];
queue<int> visitQ;
int visit[100001];
int n;

void bfs()
{
	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();

		for (int i = 0; i < graph[temp].size(); i++)
		{
			if (visit[graph[temp][i]] == 0)
			{
				visit[graph[temp][i]] = temp;
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

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int fromNode, toNode;
		cin >> fromNode >> toNode;

		graph[fromNode].push_back(toNode);
		graph[toNode].push_back(fromNode);
	}

	visitQ.push(1);

	bfs();

	for (int i = 2; i <= n; i++)
		cout << visit[i] << '\n';
}