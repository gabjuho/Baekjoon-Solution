#include<iostream>
#include<queue>
using namespace std;

int visit[1000001];
queue<int> visitQ;
vector<vector<int>> path;

void bfs(int x)
{
	visit[x] = true;
	visitQ.push(x);
	
	while (!visitQ.empty())
	{
		int temp = visitQ.front();
		
		if (temp % 2 == 0 && visit[temp] == 0)
		{
			visitQ.push(temp / 2);
		}
	}
}
int main()
{
	int x;
	cin >> x;

	bfs(x);
}