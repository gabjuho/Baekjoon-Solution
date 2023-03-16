#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int cave[126][126];
int d[126][126];
int n;
int INF = 10000000;

void dijkstra(int x, int y)
{
	priority_queue<pair<int, pair<int, int>>> pq;
	d[x][y] = 0;

	pq.push({ d[x][y], { x,y } });

	while (!pq.empty())
	{
		pair<int, pair<int, int>> nodeData = pq.top();
		pair<int, int> pos = nodeData.second;

		pq.pop();

		if (pos.first + 1 <= n && d[pos.first + 1][pos.second] > d[pos.first][pos.second] + cave[pos.first + 1][pos.second])
		{
			d[pos.first + 1][pos.second] = d[pos.first][pos.second] + cave[pos.first + 1][pos.second];
			pq.push({ -d[pos.first + 1][pos.second], { pos.first + 1,pos.second } });
		}
		if (pos.first - 1 >= 1 && d[pos.first - 1][pos.second] > d[pos.first][pos.second] + cave[pos.first - 1][pos.second])
		{
			d[pos.first - 1][pos.second] = d[pos.first][pos.second] + cave[pos.first - 1][pos.second];
			pq.push({ -d[pos.first - 1][pos.second], { pos.first - 1,pos.second } });
		}
		if (pos.second + 1 <= n && d[pos.first][pos.second + 1] > d[pos.first][pos.second] + cave[pos.first][pos.second + 1])
		{
			d[pos.first][pos.second + 1] = d[pos.first][pos.second] + cave[pos.first][pos.second + 1];
			pq.push({ -d[pos.first][pos.second + 1], { pos.first,pos.second + 1} });
		}
		if (pos.second - 1 >= 1 && d[pos.first][pos.second - 1] > d[pos.first][pos.second] + cave[pos.first][pos.second - 1])
		{
			d[pos.first][pos.second - 1] = d[pos.first][pos.second] + cave[pos.first][pos.second - 1];
			pq.push({ -d[pos.first][pos.second - 1], { pos.first,pos.second - 1} });
		}
	}
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int count = 1;
	while (1)
	{
		cin >> n;

		if (n == 0)
			break;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> cave[i][j];
				d[i][j] = INF;
			}
		}

		dijkstra(1, 1);

		cout << "Problem " << count << ": ";
		cout << d[n][n] + cave[1][1]  << '\n';
		count++;

		memset(d, 0, sizeof(d));
	}
}