#include<iostream>
using namespace std;

int num;
int pair;
int count;
int graph[101][101];
int visit[101];

void dfs(int index)
{
	::count++;
	visit[index] = 1;
	for (int i = 1; i <= num; i++)
	{
		if (i != index && graph[index][i] == 1 && visit[i] == 0)
			dfs(i);
	}
}

int main()
{
	cin >> num;
	cin >> ::pair;
	
	for (int i = 0; i < ::pair; i++)
	{
		int fromNode, toNode;

		cin >> fromNode >> toNode;
		
		graph[fromNode][toNode] = 1;
		graph[toNode][fromNode] = 1;
	}

	dfs(1);

	cout << ::count - 1;
}