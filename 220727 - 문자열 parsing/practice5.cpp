#include <iostream>
using namespace std;

char path[3];

void run(int lev, int sum)
{
	if (lev == 3) {
		cout << path << " " << sum << endl;
		return;
	}

	for (int i = 1; i <= 6; i++) {
		path[lev] = '0' + i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}

	return;
}

int main()
{
	run(0, 0);

	return 0;
}