#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n, dir, length, maxHorizontalLength = 0,maxVerticalLength = 0, area = 0, hMaxIndex, vMaxIndex, hMaxDir, vMaxDir;
	cin >> n;

	for (int i = 0; i < 6; i++)
	{
		cin >> dir >> length;
		if ((dir == 1 || dir == 2) && maxHorizontalLength < length)
		{
			maxHorizontalLength = length;
			hMaxIndex = i;
			hMaxDir = dir;
		}
		else if ((dir == 3 || dir == 4) && maxVerticalLength < length)
		{
			maxVerticalLength = length;
			vMaxIndex = i;
			vMaxDir = dir;
		}
		v.push_back(length);
	}

	int subHIndex, subVIndex;

	if (hMaxDir == 2 && vMaxDir == 4)
	{
		subHIndex = hMaxIndex + 2;
		subVIndex = vMaxIndex - 2;
		if (subHIndex >= v.size())
			subHIndex -= v.size();
		if (subVIndex < 0)
			subVIndex += v.size();
	}
	else if (hMaxDir == 2 && vMaxDir == 3)
	{
		subHIndex = hMaxIndex - 2;
		subVIndex = vMaxIndex + 2;

		if (subVIndex >= v.size())
			subVIndex -= v.size();
		if (subHIndex < 0)
			subHIndex += v.size();
	}
	else if (hMaxDir == 1 && vMaxDir == 3)
	{
		subHIndex = hMaxIndex + 2;
		subVIndex = vMaxIndex - 2;

		if (subHIndex >= v.size())
			subHIndex -= v.size();
		if (subVIndex < 0)
			subVIndex += v.size();
	}
	else if (hMaxDir == 1 && vMaxDir == 4)
	{
		subHIndex = hMaxIndex - 2;
		subVIndex = vMaxIndex + 2;

		if (subVIndex >= v.size())
			subVIndex -= v.size();
		if (subHIndex < 0)
			subHIndex += v.size();
	}

	area = v[hMaxIndex] * v[vMaxIndex] - v[subHIndex] * v[subVIndex];

	cout << n * area;
}