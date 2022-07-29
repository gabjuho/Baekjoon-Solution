#include<iostream>
using namespace std;

int GCD(int n1, int n2);

int main()
{
	int T;
	int n1, n2;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &n1, &n2);

		if (n1 > n2)
			printf("%d\n", n1 * n2 / GCD(n1, n2));
		else
			printf("%d\n", n1 * n2 / GCD(n2, n1));
	}
}

int GCD(int n1, int n2)
{
	if (n1 % n2 == 0)
		return n2;
	else
		return GCD(n2, n1 % n2);
}