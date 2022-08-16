// 연습문제 숫자찾기
#include <iostream>
using namespace std;

int arr[10] = { 4,4,5,7,8,10,20,22,23,24 };
int target;

int bs(int s, int e)
{
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (arr[mid] == target) {
			return 1;
		}
		if (arr[mid] < target)
		{
			s = mid + 1;
		}
		if (arr[mid] > target)
		{
			e = mid - 1;
		}
	}

	return 0;
}

int main()
{
	cin >> target;
	int s = 0, e = 9;
	int ret = bs(s, e);
	if (ret == 1) cout << "O";
	else {
		cout << "X";
	}


	return 0;
}