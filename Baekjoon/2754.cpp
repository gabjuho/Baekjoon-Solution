#include<iostream>
using namespace std;
int main()
{
	string grade;
	float score = 0.f;
	cin >> grade;
	
	if (grade[1] == '+')
		score = 0.3f;
	else if (grade[1] == '-')
		score = -0.3f;

	if (grade[0] == 'A')
		score += 4;
	else if (grade[0] == 'B')
		score += 3;
	else if (grade[0] == 'C')
		score += 2;
	else if (grade[0] == 'D')
		score += 1;

	printf("%.1f", score);
}