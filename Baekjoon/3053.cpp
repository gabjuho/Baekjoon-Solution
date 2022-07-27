#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	const double pi = acos(-1);
	double R;
	cin >> R;

	printf("%.6f\n", pi * R * R);
	printf("%.6f\n", 2 * R * R);
}