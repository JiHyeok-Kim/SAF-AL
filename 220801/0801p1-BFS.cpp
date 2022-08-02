// ����1
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);
queue<int> q;

int main() {

    alist[1] = { 2, 5 };
    alist[2] = { 3, 4 };
    alist[5] = { 6 };

    //���� �غ� -- ť��
    //���۳�带 ����д�.
    q.push(1);

    while (!q.empty()) {

        //1. ť���� �ϳ� ������
        int now = q.front();
        q.pop();

        cout << now << " ";

        //2. ���� �� �� �ִ� ���� �������
        for (int i = 0; i < alist[now].size(); i++) {
            int next = alist[now][i];

            q.push(next);
        }

    }


    return 0;
}