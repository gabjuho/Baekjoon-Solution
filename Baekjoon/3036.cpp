#include<iostream>
using namespace std;

int GCD(int n1, int n2);

int main()
{
	int N, comp, gcd;

	cin >> N;

	scanf("%d", &comp);

	for (int i = 0; i < N - 1; i++)
	{
		int num;
		scanf("%d", &num);
		gcd = GCD(comp, num);
		printf("%d/%d\n", comp / gcd, num / gcd);
	}
}

int GCD(int n1, int n2)
{
	if (n1 % n2 == 0)
		return n2;
	else
		return GCD(n2, n1 % n2);
}