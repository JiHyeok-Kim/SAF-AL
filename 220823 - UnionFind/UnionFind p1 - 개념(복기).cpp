#include <iostream>
using namespace std;

int line[100];

int findBoss(int tar)
{
	if (line[tar] == 0) return tar; //ó�� line[tar] �� �ʱ�ȭ�� 0���� ������

	int ret = findBoss(line[tar]);
	line[tar] = ret; //��� ���� : ��͸� ���ƿ��鼭 Boss �ٷ� ������ ����

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
		cout << "���� �׷�";
	}
	else {
		cout << "�ٸ� �׷�";
	}

	return 0;
}