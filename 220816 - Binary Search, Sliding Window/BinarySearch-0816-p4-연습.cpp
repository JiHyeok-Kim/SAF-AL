// 루트 출력하기
#include <iostream>
using namespace std;

int n;

int bs(int s, int e)
{
	int last = -1;
	while (s <= e)
	{
		int mid = (s + e) / 2;

		if (mid * mid > n)
		{
			e = mid - 1;
		}
		else
		{
			last = mid;
			s = mid + 1;
		}
	}

	return last;
}

int main()
{

	cin >> n;
	int s = 0, e = n;

	int ret = bs(s, e);

	cout << ret;

	return 0;
}