#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> alist(7);
string value = "QSJTTVB";
queue<int> q;

int main() {

    alist[4] = { 5, 2, 1 };
    alist[5] = { 6, 3 };
    alist[1] = { 0 };

    //BFS 초기 세팅
    q.push(4);

    //BFS 시작!!
    while (!q.empty()) {

        int now = q.front();
        q.pop();

        cout << value[now];

        //다음 예약
        for (int i = 0; i < alist[now].size(); i++) {
            int next = alist[now][i];

            q.push(next);
        }

    }


    return 0;
}