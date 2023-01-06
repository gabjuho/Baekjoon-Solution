#include<iostream>
#include<vector>
#include<queue>
#define INF 1000000000
using namespace std;

vector<pair<int, int>> graph[20001]; //first 간선 비용, second 끝 노드 번호
int weight[20001];
bool visit[20001];
int v, e; //노드 개수, 간선 개수
int k; //시작노드 번호

void Dijkstra()
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	weight[k] = 0;
	visit[k] = true;
	pq.push({ weight[k], k });

	while (!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();

		for (int i = 0; i < graph[node].size(); i++)
		{
			if (weight[node] + graph[node][i].first < weight[graph[node][i].second])
			{
				weight[graph[node][i].second] = weight[node] + graph[node][i].first;
				pq.push({ weight[graph[node][i].second], graph[node][i].second });
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> v >> e;
	cin >> k;

	for (int i = 1; i <= v; i++)
		weight[i] = INF;

	for (int i = 0; i < e; i++)
	{
		int fromNode, toNode, w; //w: 가중치
		cin >> fromNode >> toNode >> w;

		graph[fromNode].push_back({ w, toNode });
	}

	Dijkstra();

	for (int i = 1; i <= v; i++)
	{
		if (weight[i] == INF)
			cout << "INF" << '\n';
		else
			cout << weight[i] << '\n';
	}
}