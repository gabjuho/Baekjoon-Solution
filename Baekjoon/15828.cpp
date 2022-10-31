#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;

	int n;
	cin >> n;

	while (1)
	{
		int packet;
		cin >> packet;

		if (packet == -1)
			break;
		else if (packet == 0)
			q.pop();
		else
		{
			if(q.size() < n)
				q.push(packet);
		}
	}

	int size = q.size();

	for (int i = 0; i < size; i++)
	{
		cout << q.front() << ' ';
		q.pop();
	}
}