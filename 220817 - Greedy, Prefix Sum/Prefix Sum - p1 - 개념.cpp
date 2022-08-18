#include <iostream>
using namespace std;

// Prefix Sum
int line[10] = { 4,3,2,1,1,2,4,5,8,3 };
int acc[10];

int main()
{
	acc[0] = line[0];
	for (int i = 1; i < 10; i++){
		acc[i] = acc[i - 1] + line[i];
	}

	int a = 2;
	int b = 5;

	cout << acc[b] - acc[a - 1];
}

// 내가 만든 방식
/*
int main()
{
	int arr[10] = { 4,2,5,1,1,2,3,1,4,1 };
	int sumArr[10];

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
		sumArr[i] = sum;
	}

	int a, b;
	cin >> a >> b;
	if (a > b || a < 0 || a > 9 || b < 0 || b > 9)
	{ cout << "범위 ERROR"; return 0; }
	if (a == 0) { cout << sumArr[b]; return 0;}
	int ans = sumArr[b] - sumArr[a - 1];

	cout << ans;

	return 0;
}
*/