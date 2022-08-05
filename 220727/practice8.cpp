#include <iostream>
using namespace std;

int path[4];
int arr[4][5] = { {4,5,1,-3,2}, {1,-1,3,-1,-5}, {4,2,-5,6,-9}, {-1,-1,-2,5,7} };
int used[5];
int gop = 0;
int mini = 99999999;

void run(int lev, int gop){
	if (lev == 4){
		if (gop < mini) { mini = gop; }
		for (int i = 0; i < 4; i++) { cout << path[i]; }
		cout << "\n";
		return;
	}

	for (int i = 0; i < 5; i++){
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = i;
		run(lev + 1, gop * arr[lev][i]);
		path[lev] = 0;
		used[i] = 0;
	}

	return;
}

int main()
{
	run(0, 1);

	cout << mini;

	return 0;
}