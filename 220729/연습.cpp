#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(5);
int used[5]

void run(int now)
{
	cout << now;

	for (int i = 0; i < alist[now].size(); i++)
	{
		int next = alist[now][i];

		if (used[i] = 1) continue;
		used[next] = 1;
		run(next);
	}
}

int main()
{
	alist[1] = { 2, 4 };
	alist[2] = { 5 };
	alist[3] = { 1 };
	alist[4] = { 3 };
	alist[5] = { 1, 3 };

	used[1] = 1;
	run(1);

	return 0;
}