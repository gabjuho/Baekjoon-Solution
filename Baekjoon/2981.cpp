#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int GCD(int num1, int num2);

int main()
{
	vector<int> v, factor;
	int N, gcd, count = 0;
	int num;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	if (N == 2)
	{
		gcd = v[1] - v[0];
	}
	else
	{
		if (v[2] - v[1] > v[1] - v[0])
			gcd = GCD(v[2] - v[1], v[1] - v[0]);
		else
			gcd = GCD(v[1] - v[0], v[2] - v[1]);
	}

	for (int i = 2; i < v.size() - 1; i++) //N개의 숫자의 최대공약수 구하기
	{
		if (v[i + 1] - v[i] > gcd)
			gcd = GCD(v[i + 1] - v[i], gcd);
		else
			gcd = GCD(gcd, v[i + 1] - v[i]);
	}

	for (int i = 2; i <= sqrt(gcd); i++)
		if (gcd % i == 0)
		{
			factor.push_back(i);
			printf("%d ", factor[count++]);
		}

	for (int i = factor.size() - 1; i >= 0 ; i--)
		if(gcd/factor[i] != factor[i])
			printf("%d ", gcd/factor[i]);

	printf("%d ", gcd);
}

int GCD(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;
	else
		return GCD(num2, num1 % num2);
}