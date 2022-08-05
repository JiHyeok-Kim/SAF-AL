#include <iostream>
using namespace std;

int path[3];
// b : 6, L : n
int n = 3;

void run(int lev, int sum){
	//if (sum >= 10) return;

	if (lev == n) {
		for (int i : path) { cout << i; }
		cout << " " << sum << "\n";
		return;
	}

	for (int i = 1; i <= 6; i++) { 
		if (sum + i >= 10) continue;
		path[lev] = i;
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