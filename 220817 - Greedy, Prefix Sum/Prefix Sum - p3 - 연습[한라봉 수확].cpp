#include <iostream>
using namespace std;
int n;
int line[110000];
int acc[110000];
int getSum(int a, int b) {
	if (a > b) return 0;
	if (a == 0) return acc[b];
	return acc[b] - acc[a - 1];
}
int main() {

	//freopen_s(new FILE*, "input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	//�Է¹ް�, �κ��� ����
	for (int i = 0; i < n; i++) cin >> line[i];
	acc[0] = line[0];
	for (int i = 1; i < n; i++) {
		acc[i] = acc[i - 1] + line[i];
	}
	//�� ������ : �ٱ���
	//�� ���� : ����
	//�߰�(i) : ��ö
	int maxi = -21e8;
	for (int i = 1; i < n - 1; i++) {
		int ga = getSum(1, n - 1); //���� ~ �ٱ���
		int gb = getSum(i + 1, n - 1); //��ö ~ �ٱ���
		maxi = max(maxi, ga + gb - line[i]);
	}
	//�� ���� : �ٱ���
	//�� ������ : ��ö
	//�߰�(i) : ����
	for (int i = 1; i < n - 1; i++) {
		int ga = getSum(0, n - 2);
		int gb = getSum(0, i - 1);
		maxi = max(maxi, ga + gb - line[i]);
	}
	//�ٱ��� : �߰�
	//�� ����, ������ : ��ö, ����
	for (int i = 1; i < n - 1; i++) {
		int ga = getSum(1, i);
		int gb = getSum(i, n - 2);
		maxi = max(maxi, ga + gb);
	}

	cout << maxi;
	return 0;
}

// ��Ǯ�� �Ϻ� ����
/*
#include <iostream>
using namespace std;

int jeju[100000];
int acc[100000];
int accR[100000];

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> jeju[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += jeju[i];
		acc[i] = sum;
	}

	sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		sum += jeju[i];
		accR[i] = jeju[i];
	}

	int suma = 0;
	int maxa = -1;
	int a = 0;
	int b = 0;
	for (int i = 1; i < n; i++)
	{
		a = acc[n - 1];
		b = acc[i];
		suma = a - b + a - jeju[0] - jeju[i];
		if (suma > maxa) { maxa = suma; }
	}

	int sumb = 0;
	int maxb = -1;
	for (int i = n -1; i >= 0; i--)
	{
		a = accR[0];
		b = accR[i];
		sumb = a - b + a - jeju[n - 1] - jeju[i];
		if (sumb > maxb) { maxb = sumb; }
	}

	if (maxa >= maxb) cout << maxa;
	else cout << maxb;

	return 0;
}
*/