#include<iostream>
using namespace std;
int main()
{
	float expert = 0;
	float sumScore = 0;

	cout << fixed;
	cout.precision(6);

	for (int i = 0; i < 20; i++)
	{
		string subject, grade;
		float score;

		cin >> subject >> score >> grade;

		if (grade.size() == 2)
		{
			float temp = 0;
			if (grade[0] == 'A')
				temp = 4;
			else if (grade[0] == 'B')
				temp = 3;
			else if (grade[0] == 'C')
				temp = 2;
			else if (grade[0] == 'D')
				temp = 1;

			if (grade[1] == '+')
				temp += 0.5;

			expert += temp * score;
			sumScore += score;
		}
		else
		{
			if (grade[0] != 'P')
				sumScore += score;
		}
	}

	if (sumScore == 0)
		cout << 0;
	else
		cout << expert / sumScore;
}