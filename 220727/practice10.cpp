#include <iostream>
using namespace std;

int n = 3;
char path[10];
void run(int lev, int start) {
	if (lev == n) {
		cout << path << "\n";
		return;
	}

	for (int i = start; i <= 6; i++) {
		path[lev] = '0' + i;
		run(lev + 1, i);
		path[lev] = 0;
	}
}

int main() {
	run(0, 1);

	return 0;
}