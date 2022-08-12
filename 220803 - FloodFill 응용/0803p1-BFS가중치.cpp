//BFS가중치 문제 사진1
/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
	int num;
	int price;
	int lev;
};

vector<vector<Node>> alist(6);
queue<Node> q;
int used[10];

int main() {
	alist[1] = { {2, 5}, {3, 3}, {4, 15} };
	alist[2] = { {3, 7}, {4, 10} };
	alist[3] = { {1, 1}, {4, 2} };
	alist[4] = { {5, 20} };

	q.push({ 1, 0 });
	used[1] = 1;

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		////1. 목적지 탐색시 종료 
		//환승 횟수
		//if (now.num == 5) {
		//    cout << "도착!! " << now.lev - 1 << "\n";
		//    cout << now.price;
		//    break;
		//}

		for (int i = 0; i < alist[now.num].size(); i++) {
			Node next = alist[now.num][i];
			q.push({ next.num, now.price + next.price, now.lev + 1 });

			//2. 목적지 예약을 걸자마자 종료
			//환승 횟수
			if (next.num == 5)
			{
				cout << "도착!! " << now.lev << "\n";
				cout << now.price + next.price;
				return 0;
			}
		}
	}


	return 0;
}
*/

//BFS가중치 문제2 사진2
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
	int num;
	int price;
	int lev;
};

vector<vector<Node>> alist(6);
queue<Node> q;

int main() {
	alist[1] = { {2, 3}, {3, 5} };
	alist[2] = { {3, 4}, {4, 1} };
	alist[3] = { {4, 3}, {5, 2} };
	alist[4] = { {5, 7} };

	q.push({ 1, 0 });

	while (!q.empty()) {

		Node now = q.front();
		q.pop();

		for (int i = 0; i < alist[now.num].size(); i++) {
			Node next = alist[now.num][i];
			q.push({ next.num, now.price + next.price, now.lev + 1 });

			if (next.num == 5)
			{
				cout << now.lev + 1 << "회 만에 도착\n";
				cout << now.price + next.price << "만원 비용 발생";
				return 0;
			}
		}
	}


	return 0;
}