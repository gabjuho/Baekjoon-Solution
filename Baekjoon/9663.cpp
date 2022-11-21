#include<iostream>
using namespace std;

int arr[14];
int cnt;
int n;


void dfs(int count)
{
	if (count == n)
	{
		cnt++;
		return;
	}


	for (int i = 0; i < n; i++)
	{
		bool isPlace = true; //놓을 수 있는가?
		int y = count;

		for (int k = 0; k < count; k++)
		{
			if (arr[k] - i == 0 || abs(k - y) == abs(arr[k] - i))
			{
				isPlace = false; 
				break;
			}
		}

		if (!isPlace)
			continue;

		arr[count] = i;

		dfs(count + 1);
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;
	dfs(0);

	cout << cnt;
}