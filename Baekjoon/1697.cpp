#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int graph[200001];
queue<int> visitQ;

int n, k;

void bfs(int index)
{
	graph[index] = 1;
	visitQ.push(index);

	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		visitQ.pop();
		if (temp == k)
			break;

		if (temp - 1 >= 0 && graph[temp - 1] == 0)
		{
			graph[temp - 1] = graph[temp] + 1;
			visitQ.push(temp - 1);
		}
		
		if (temp <= k && graph[temp + 1] == 0)
		{
			graph[temp + 1] = graph[temp] + 1;
			visitQ.push(temp + 1);
		}

		if (temp < k && graph[temp * 2] == 0)
		{
			graph[temp * 2] = graph[temp] + 1;
			visitQ.push(temp * 2);
		}
	}
}
int main()
{
	cin >> n >> k;
	bfs(n);

	cout << graph[k] - 1;
}