#include <iostream>
using namespace std;

char path[2];
char name[4] = { 'A','B','C','D' };
void run(int lev){
	if (lev == 0 && path[0] == 'D') return;

	if (lev == 2) {
		cout << path << "\n";
		return;
	}

	for (int i = 0; i < 4; i++) {
		path[lev] = 'A' + i;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main() {
	run(0);

	return 0;
}