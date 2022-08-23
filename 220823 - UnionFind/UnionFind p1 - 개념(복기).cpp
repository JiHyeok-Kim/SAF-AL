#include <iostream>
using namespace std;

int line[100];

int findBoss(int tar)
{
	if (line[tar] == 0) return tar; //처음 line[tar] 의 초기화가 0으로 설정됨

	int ret = findBoss(line[tar]);
	line[tar] = ret; //경로 압축 : 재귀를 돌아오면서 Boss 바로 밑으로 수정

	return ret;
}

void unionGroup(int a, int b)
{
	int t1 = findBoss(a);
	int t2 = findBoss(b);
	if (t1 == t2) return;
	line[t2] = t1;
}

int main()
{
	unionGroup(3, 4);
	unionGroup(3, 5);
	unionGroup(5, 1);
	unionGroup(8, 9);

	if (findBoss(3) == findBoss(4)) {
		cout << "같은 그룹";
	}
	else {
		cout << "다른 그룹";
	}

	return 0;
}