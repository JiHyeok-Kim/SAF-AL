#include <iostream>
#include <string>
using namespace std;

string path[3];
string str[6] = { "BT", "KF", "CCC", "MOM", "SK", "MC" };


void run(int lev, string sum)
{
	if (lev == 3)
	{
		cout << sum << "\n";
		if (sum == "BTSKMC") { cout << "여기 BTSKMC 조합이 있다~"; }
		return;
	}
	for (int i = 0; i < 6; i++)
	{
		run(lev + 1, sum + str[i]);
	}

	return;
}

int main()
{
	run(0, "");

	return 0;
}