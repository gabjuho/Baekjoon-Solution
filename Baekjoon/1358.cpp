#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int W, H, X, Y, P, count = 0;
	vector<pair<int, int>> v;

	cin >> W >> H >> X >> Y >> P;

	for (int i = 0; i < P; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}

	for (int i = 0; i < P; i++)
	{
		if (pow(v[i].first - X, 2) + pow(v[i].second - (Y + H / 2), 2) <= pow(H / 2, 2))
			count++;
		else if (pow(v[i].first - (X + W), 2) + pow(v[i].second - (Y + H / 2), 2) <= pow(H / 2, 2))
			count++;
		else if (v[i].first >= X && v[i].first <= X + W && v[i].second >= Y && v[i].second <= Y + H)
			count++;
	}
	cout << count;
}