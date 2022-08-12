#include <iostream>
using namespace std;

int n;
int path[3];
int used[7];


void run(int lev) {
	if (lev == n)
	{
		for (int i : path) { cout << i; }
		cout << "\n";
		return;
	}

	for(int i = 1; i <= 6; i++){
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = i;
		run(lev + 1);
		path[lev] = 0;
		used[i] = 0;
	}

	return;
}

int main()
{
	cin >> n;
	run(0);

	return 0;
}