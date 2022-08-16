//자동차 기름 게이지
#include <iostream>
#include <string>
using namespace std;

string str;

int bs(int s, int e)
{
	int gauge = -1;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		
		if (str[mid] == '#')
		{
			gauge = mid;
			s = mid + 1;
		}
		if (str[mid] != '#')
		{
			e = mid - 1;
		}
	}
	
	return gauge;
}

int main()
{
	cin >> str;
	int s = 0, e = str.length() - 1;
	int ret = bs(s, e);
	int percent = (ret + 1) * 100 / str.length();
	cout << percent << "%";

	return 0;
}