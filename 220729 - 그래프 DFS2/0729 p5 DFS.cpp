/*
//그래프 DFS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(6);
vector<string> value(6);

int main()
{
	alist[1] = { 5, 2 };
	alist[2] = { 3 };
	alist[3] = { 5, 4 };
	alist[5] = { 4 };

	value = { "", "BTS", "KFC", "MOMS", "MC", "BBQ" };

	int n;
	cin >> n;

	for (int i = 0; i < alist[n].size(); i++) {
		cout << value[alist[n][i]] << " ";
	}

	return 0;
}*/
/*
//그래프 TREE
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);

void run(int now) {

	cout << now << " ";

	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];
		run(next);
	}

}
int main()
{
	alist[1] = { 2, 3 };
	alist[2] = { 4, 5 };
	alist[3] = { 6 };

	run(1);

	return 0;
}
*/

/*
//사진 1
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);

void run(int now) {

	cout << now << " ";

	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];
		run(next);
	}

}
int main()
}#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);

void run(int now) {

	cout << now << " ";

	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];
		run(next);
	}

}
int main()
{
	alist[1] = { 2, 3 };
	alist[2] = { 4, 5 };
	alist[3] = { 6 };

	run(1);

	return 0;
}
*/

//사진 2
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(5);
int used[5];

void run(int now) {
	cout << now;
	for (int i = 0; i < alist[now].size(); i++) {
		int next = alist[now][i];

		if (used[next] == 1) continue;
		used[next] = 1;
		run(next);
	}

}

int main()
{
	alist[1] = { 2 };
	alist[2] = { 3, 4 };
	alist[3] = { 4 };
	alist[4] = { 1 };

	used[1] = 1;
	run(1);

	return 0;
}