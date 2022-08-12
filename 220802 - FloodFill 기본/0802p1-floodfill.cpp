//flood fill 플러드 필
/*
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
	int lev;
};

int room[5][5]; //map
int directY = { -1,1,0,0 };
int directX = { 0,0,-1,1 };
queue<Node> q;

int main()
{
	room[2][2] = 1; //피
	q.push({ 2, 2, 0 });

	//flood fill 시작
	while (!q.empty()) {

		//1. 하나빼기
		Node now = q.front();
		q.pop();

		//2. 다음 갈 수 있는 길 등록
		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny > 5 || nx > 5) continue;
			if (room[ny][nx] == 1) continue;

			room[ny][nx] = 1;
			q.push({ny, nx, , now.lev + 1});
		}
	}
	
	return 0;
}
*/

/*
// 꽃피우기 출력 연습
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};

int flower[3][4];
int directY[4] = { -1,1,0,0 };
int directX[4] = { 0,0,-1,1 };
queue<Node> q;

int main()
{
	flower[1][1] = 1;
	q.push({ 1, 1 });

	while (!q.empty())
	{
		//1. 하나빼기
		Node now = q.front();
		q.pop();

		//2. 다음 밀기
		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= 3 || nx >= 4) continue;
			if (flower[ny][nx] != 0) continue;

			flower[ny][nx] = flower[now.y][now.x] + 1;
			q.push({ ny, nx });
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << flower[y][x] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/

/*
//연습 2
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node {
	int y, x;
};

int arr[5][5];
int y, x;
int directY[4] = { -1,1,0,0 };
int directX[4] = { 0,0,-1,1 };
queue<Node> q;

int main()
{
	cin >> y >> x;
	arr[y][x] = 1;
	q.push({ y, x });

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
			if (arr[ny][nx] != 0) continue;

			arr[ny][nx] = arr[now.y][now.x] + 1;
			q.push({ ny,nx });
		}
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			cout << arr[y][x] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/


//연습 3
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Node
{
	int y, x;
	int lev;
};

int arr[100][100];
int directY[4] = { -1,1,0,0 };
int directX[4] = { 0,0,-1,1 };
queue<Node> q;

int y, x;
int y1, y2, x1, x2;
int lastLev = 0;

int main()
{
	cin >> y >> x;
	cin >> y1 >> x1;
	cin >> y2 >> x2;

	arr[y1][x1] = 1;
	arr[y2][x2] = 1;
	q.push({ y1, x1, 0 });
	q.push({ y2, x2, 0 });

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= y || nx >= x) continue;
			if (arr[ny][nx] == 1) continue;

			arr[ny][nx] = 1;
			q.push({ ny, nx, now.lev + 1 });

			lastLev = now.lev + 2;
		}
	}

	cout << lastLev;

	return 0;
}
