#include <iostream>
using namespace std;

int n;
int path[100];
int used[100];
int cnt = 0;

void run(int lev)
{
	if (lev == n) { cnt++;  return; }

	for (int i = 0; i < n; i++)
	{
		if (used[i] == 1) continue;
		used[i] = 1;
		path[i] = i;
		run(lev + 1);
		path[i] = 0;
		used[i] = 0;
	}

	return;
}

int main()
{
	cin >> n;
	run(0);

	cout << cnt;

	return 0;
}