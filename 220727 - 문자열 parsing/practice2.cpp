#include <iostream>
using namespace std;

char path[2];
char name[5] = "ABCD";

void run(int lev)
{
	if (lev == 2)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (lev == 0 && i == 3) continue;
		path[lev] = name[i];
		run(lev + 1);
		path[lev] = 0;
	}

	return;
}

int main()
{
	run(0);

	return 0;
}