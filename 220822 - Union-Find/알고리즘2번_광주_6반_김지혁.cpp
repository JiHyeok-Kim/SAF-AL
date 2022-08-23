#include <iostream>
#include <string>
using namespace std;

string str;
string bucket[500];
int last;

int main()
{
	cin >> str;
	int cnt = 0;
	for (int i = 1; i <= str.length(); i++)
	{
		for (int j = 1; j <= i; j++)
		{
			bucket[cnt] = str.substr(j - 1, str.length() + 1 - i);
			cnt++;
		}
	}
	for (int i = 1; i <= str.length(); i++)
	{
		last += i;
	}

	for (int i = 1; i < last; i++)
	{
		int start1 = 0;
		while (1)
		{
			int ret1 = str.find(bucket[i], start1);
			if (ret1 == -1) break;
			int len = bucket[i].length();
			int start2 = ret1 + len;
			int ret2 = str.find(bucket[i], start2);
			if (ret1 + len == ret2)
			{
				cout << len;
				return 0;
			}
			start1 = ret1 + len;
		}
	}
	cout << 0;

	return 0;
}