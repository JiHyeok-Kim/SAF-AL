#include <iostream>
using namespace std;

int n;
int m;
int path[10];
int used[7];

void run1(int lev) {
	if (lev == n) {
		for (int i = 0; i < n; i++) { cout << path[i] << " "; }
		cout << "\n"; return;
	}

	for (int i = 1; i <= 6; i++) {
		path[lev] = i;
		run1(lev + 1);
		path[lev] = 0;
	}

	return;
}

void run2(int lev, int start) {
	if (lev == n) {
		for (int i = 0; i < n; i++) { cout << path[i] << " "; }
		cout << "\n"; return;
	}

	for (int i = start; i <= 6; i++) {

		path[lev] = i;
		run2(lev + 1, i);
		path[lev] = 0;
	}

	return;
}

void run3(int lev) {
	if (lev == n) {
		for (int i = 0; i < n; i++) { cout << path[i] << " "; }
		cout << "\n"; return;
	}

	for (int i = 1; i <= 6; i++) {
		if (used[i] == 1) continue;

		used[i] = 1;
		path[lev] = i;
		run3(lev + 1);
		path[lev] = 0;
		used[i] = 0;
	}

	return;
}

void mod(int x)
{
	if (x == 1) { run1(0); }
	else if (x == 2) { run2(0, 1); }
	else if (x == 3) { run3(0); }

	return;
}

int main()
{
	cin >> n >> m;

	mod(m);

	return 0;
}