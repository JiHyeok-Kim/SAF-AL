#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int y, x;
};

int map[100][100];
int H, W;
int R, C;
int by, bx;
int n;
int directY[] = { -3, -3, -2, -2, 2, 2, 3, 3 };
int directX[] = { -2, 2, -3, 3, -3, 3, -2, 2 };
int used[100][100];
int ans;
int flag;

queue<Node> q;

void moveSang(int by, int bx)
{
	q.push({ by, bx });
	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int ny = now.y + directY[i];
			int nx = now.x + directX[i];
			if (ny < 0 || nx < 0 || ny >= H || nx >= W) continue;
			if (map[ny][nx] == 1) continue;
			if (used[ny][nx] == 1) continue;
			used[ny][nx] = 1;
			ans++;
			if (map[ny][nx] == 2)
			{
				cout << ans;
				flag = 1;
			}
			q.push({ ny, nx });
		}
	}

	return;
}

int main()
{
	cin >> H >> W;
	cin >> R >> C;
	cin >> by >> bx;
	cin >> n;
	map[R][C] = 1;
	map[by][bx] = 2;
	for (int i = 0; i < n; i++)
	{
		int y, x;
		cin >> y >> x;
		map[y][x] = 1;
	}

	moveSang(by, bx);
	if (flag == 0) cout << -1;

	return 0;
}