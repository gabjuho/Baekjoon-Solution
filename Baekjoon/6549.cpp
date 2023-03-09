#include<iostream>
#include<stack>
using namespace std;

long long h[100001];

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1)
	{
		stack<int> s;
		int n;
		long long max = -1;
		cin >> n;

		if (n == 0)
			break;

		for (int i = 0; i < n; i++)
			cin >> h[i];

		for (int i = 0; i < n; i++)
		{
			while (!s.empty() && h[i] < h[s.top()])
			{
				long long hTop = h[s.top()];
				//스택이 비워져있으면, 직사각형의 너비는 인덱스와 동일하다.
				int l = i;
				s.pop();

				//스택이 비워져있지 않으면, 직사각형의 너비 계산
				if (!s.empty())
					l = i - s.top() - 1;

				//직사각형의 최댓값 갱신
				if (max < l * hTop)
					max = l * hTop;
			}

			//스택에 인덱스 푸시
			s.push(i);
		}

		//모든 막대들의 순회를 마쳐도 스택에 처리되지 않은 막대들의 인덱스들이 남아있다면
		while (!s.empty())
		{
			long long hTop = h[s.top()];
			int l = n;
			s.pop();

			if (!s.empty())
				l = n - s.top() - 1;
			if (max < l * hTop)
				max = l * hTop;
		}

		cout << max << '\n';
	}
}