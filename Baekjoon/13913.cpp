#include<iostream>
#include<queue>
#include<stack>
using namespace std;

bool visit[100001];
int second[100001];
int root[100001];
int n, k;

void bfs(int index)
{
	queue<int> q;
	visit[index] = true;
	q.push(index);

	while (!q.empty())
	{
		int temp = q.front();
		q.pop();

		if (temp == k)
			break;

		if (temp + 1 <= 100000 && !visit[temp + 1])
		{
			visit[temp + 1] = true;
			q.push(temp + 1);
			second[temp + 1] = second[temp] + 1;
			root[temp + 1] = temp;
		}
		if (temp - 1 >= 0 && !visit[temp - 1])
		{
			visit[temp - 1] = true;
			q.push(temp - 1);
			second[temp - 1] = second[temp] + 1;
			root[temp - 1] = temp;
		}
		if (temp * 2 <= 100000 && !visit[temp * 2])
		{
			visit[temp * 2] = true;
			q.push(temp * 2);
			second[temp * 2] = second[temp] + 1;
			root[temp * 2] = temp;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	stack<int> s;
	cin >> n >> k;

	bfs(n);

	cout << second[k] << '\n';

	int temp = k;

	while (temp != n)
	{
		s.push(temp);
		temp = root[temp];
	}

	s.push(temp);

	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
}