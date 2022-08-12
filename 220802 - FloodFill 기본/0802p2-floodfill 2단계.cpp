/*
//섬의 크기 구하기
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int map[5][7] = {
	1,1,1,1,1,1,1,
	0,0,0,0,0,0,1,
	1,1,0,1,0,1,1,
	1,0,0,0,0,0,1,
	1,1,1,1,0,1,1
}; //0, 0을 포함한 섬의 크기는? = 13

struct Node {
	int y, x;
};
int directY[] = { -1,1,0,0 };
int directX[] = { 0,0,-1,1 };
int cnt = 1;
queue<Node> q;

int main()
{
	q.push({ 0, 0 });

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= 5 || nx >= 7) continue;
			if (map[ny][nx] != 1) continue;

			map[now.y][now.x] = -1;
			q.push({ ny, nx });
			cnt++;
		}
	}

	cout << cnt;
}
*/
/*
//Zombie 백신
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	int y, x;
	int lev;
};

char map[100][100];
int directY[] = { -1,1,0,0 };
int directX[] = { 0,0,-1,1 };
queue<Node> q;
int cnt = 0;
int lastLev = 0;
int w, h;
int x, y;

int main()
{
	cin >> w >> h;
	for (int j = 0; j < h; j++) {
		cin >> map[j];
	}
	cin >> x >> y;

	q.push({ y - 1, x - 1, 3 });

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			map[now.y][now.x] = '0';
			lastLev = now.lev;
			if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
			if (map[ny][nx] == '0') continue;


			q.push({ ny, nx, now.lev + 1 });

			lastLev = now.lev + 1;
		}
	}

	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			if (map[y][x] == '1') { cnt++; }
		}
	}

	cout << lastLev << "\n" << cnt;
}
*/
/*
//미로찾기
#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int y, x;
	int lev;
};

int map[4][5] = {
	0,0,0,0,0,
	0,1,0,1,0,
	0,1,0,1,0,
	0,1,0,0,0,
};

queue<Node> q;
int directY[4] = { -1, 1, 0, 0 };
int directX[4] = { 0, 0, -1, 1 };
int used[4][5];

int BFS() {

	used[3][0] = 1;
	q.push({ 3, 0 });

	while (!q.empty()) {
		Node now = q.front();
		q.pop();


		for (int t = 0; t < 4; t++) {
			int ny = now.y + directY[t];
			int nx = now.x + directX[t];
			if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
			if (map[ny][nx] == 1) continue;
			if (used[ny][nx] == 1) continue;
			used[ny][nx] = 1;

			q.push({ ny, nx, now.lev + 1 });

			if (ny == 1 && nx == 4) return now.lev + 1;
		}
	}

	return -1;
}

int main() {

	cout << BFS();


	return 0;
}
*/
/*
//체스 말잡기
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	int y, x;
	int lev;
};

int chess[100][100];
int h, w;
int xl, yl;
int xt, yt;
int directY[] = { -2,-2,-1,-1,1,1,2,2 };
int directX[] = { -1,1,-2,2,-2,2,-1,1 };
int used[100][100];
queue<Node> q;

int main()
{
	cin >> h >> w;
	cin >> yl >> xl;
	cin >> yt >> xt;
	chess[yl - 1][xl - 1] = 1;
	chess[yt - 1][xt - 1] = 2;
	q.push({ yl - 1, xl - 1, 1 });

	while (!q.empty()) {
		Node now = q.front();
		q.pop();
		used[now.y][now.x] = 1;

		for (int i = 0; i < 8; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
			if (used[ny][nx] == 1) continue;
			if (chess[ny][nx] == 2) {
				cout << now.lev;
				return 0;
			}

			q.push({ ny, nx, now.lev + 1 });
			used[ny][nx] = 1;
		}
	}
}
*/

/*
//섬 찾아 삼만리
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int map[100][100];
int N, M;
int cnt = 0;
int used[100][100] = { 0 };

struct Node {
	int y, x;
};

void cntIsland(int y, int x)
{
	if (used[y][x] == 1) return;
	cnt++;
	used[y][x] = 1;

	int directY[] = { -1,1,0,0 };
	int directX[] = { 0,0,-1,1 };
	queue<Node> q;

	q.push({ y, x});

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (map[ny][nx] == 0) continue;
			if (used[ny][nx] == 1) continue;

			used[ny][nx] = 1;
			q.push({ ny,nx });
		}
	}

	return;
}

int main()
{
	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
		}
	}
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[y][x] == 1) { cntIsland(y, x);}
		}
	}

	cout << cnt;

	return 0;
}
*/

/*
//퀴즈 검수자
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	int y, x;
	int lev;
};

int table[100][100];
int directY[] = { -3,-3,-2,-2,2,2,3,3 };
int directX[] = { -2,2,-3,3,-3,3,-2,2 };
int cnt = 0;
int h, w, r, c, yb, xb, n;
int yx[50][2];
int used[100][100];
queue<Node> q;

int main()
{
	cin >> h >> w;
	cin >> r >> c;
	cin >> yb >> xb;
	cin >> n;

	table[r][c] = 1;
	table[yb][xb] = 2;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < 2; x++) {
			cin >> yx[y][x];
		}
		table[yx[y][0]][yx[y][1]] = 1;
	}

	q.push({ r, c, 0 });

	while (!q.empty()) {
		Node now = q.front();
		q.pop();
		if (table[now.y][now.x] == 2) { cout << now.lev; return 0; }

		for (int i = 0; i < 8; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
			if (table[ny][nx] == 1) continue;
			if (used[ny][nx] == 1) continue;

			q.push({ ny, nx, now.lev + 1 });
			used[ny][nx] = 1;
		}
	}

	cout << -1;
	return 0;
}
*/
//백신검사
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};



int map[150][150];
int N, M;
int used[150][150];
int cnt = 0;
queue<Node> q;

void vaccine(int y, int x)
{
	if (used[y][x] == 1) { return; }
	used[y][x] = 1;

	int flag = 0;
	int directY[] = { -1,1,0,0 };
	int directX[] = { 0,0,-1,1 };

	q.push({ y, x });
	while (!q.empty()) {
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (map[now.y][now.x] == 2) { flag = 1; };
			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (used[ny][nx] == 1) continue;
			if (map[ny][nx] == 0) continue;

			q.push({ ny, nx });
			used[ny][nx] = 1;
		}
	}

	if (flag == 1) { cnt++; }

	return;
}
int main()
{
	int t = 9;
	cin >> N >> M;
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[y][x] != 0) { vaccine(y, x); };
		}
	}

	cout << cnt;

	return 0;
}