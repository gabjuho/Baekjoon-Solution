#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Info
{
public:
	int age;
	string name;

	Info(int age, string name)
	{
		this->age = age;
		this->name = name;
	}
};

bool compare(Info a, Info b);

int main()
{
	int N, age;
	string name;
	cin >> N;

	vector<Info> vec;

	for (int i = 0; i < N; i++)
	{
		cin >> age;
		cin >> name;
		
		vec.push_back(Info(age,name));
	}

	stable_sort(vec.begin(), vec.end(), compare); //일반 sort는 불안정 정렬이므로, 나이가 같은 부분이 입력 순서대로 정렬되지 않았을 가능성이 있음.
	//stable_sort 알고리즘 구조는 병합정렬임
	for (int i = 0; i < N; i++)
		cout << vec[i].age <<' '<< vec[i].name << '\n';
}

bool compare(Info a, Info b)
{
	if (a.age < b.age)
		return true;

	return false;
}