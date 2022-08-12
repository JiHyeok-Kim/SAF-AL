#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[3] = { "ABC", "BTS", "KFCKFC" };

	for (int t = 0; t < 3; t++)
	{
		for (int x = (str[t].length() - 1); x >= 0 ; x--)
		{
			cout << str[t][x];
		}
		cout << "\n";
	}

	return 0;
}