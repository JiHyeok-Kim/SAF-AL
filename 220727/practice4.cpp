#include <iostream>
#include <string>
using namespace std;

char path[10];

void run(int lev) {
	//if (lev >= 2 && path[lev - 1] == path[lev - 2]) return;
	if (lev == 3) {
		cout << path << "\n";
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (lev != 0 && path[lev - 1] == '1' + i) continue;
		path[lev] = '1' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {
	run(0);
	return 0;
}