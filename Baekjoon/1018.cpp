#include<iostream>
using namespace std;

int ChangeChess(char**chess,int x,int y);

int main()
{
	int x, y;
	int xCount = 0, yCount = 0, min = -1, temp;
	cin >> x >> y;

	char** chess = new char*[x];

	for (int i = 0; i < x; i++)
		chess[i] = new char[y];

	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> chess[i][j];

	for (int i = 0; i < x - 7; i++)
	{
		for (int j = 0; j < y - 7; j++)
		{
			temp = ChangeChess(chess, i, j);
			if (min > temp || min == -1)
				min = temp;
		}
	}

	cout << min;
}

int ChangeChess(char**chess,int x,int y)
{
	int change = 0; //wChange는 첫 체스 칸이 흰색일 때, bChange는 첫 체스칸이 검은색일 때, 바꿔야하는 체스판의 개수
	char nowChess = 'W'; //현재 나와야할 체스칸
	char tempChess; //이전 열 첫 행에 나왔던 체스칸의 색
		
	for (int i = x; i < x + 8; i++)
	{
		tempChess = nowChess;

		for (int j = y; j < y + 8; j++)
		{
			if (nowChess != chess[i][j])
				change++;

			if (nowChess == 'W')
				nowChess = 'B';
			else
				nowChess = 'W';
		}

		if (tempChess == 'W')
			nowChess = 'B';
		else
			nowChess = 'W';
	}
	
	if (change > 32)
		change = 64 - change;

	return change;
}