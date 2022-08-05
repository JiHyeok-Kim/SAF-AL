#include<iostream>
#include<string>
using namespace std;

/*
- 경로상에는 중복정점이 없도록
- 모든 경로 찾기
*/
int adj[4][4];
void input() {
    adj[0][1] = 1;
    adj[0][2] = 1;
    adj[0][3] = 1;
    adj[1][0] = 1;
    adj[1][3] = 1;
    adj[2][1] = 1;
    adj[2][3] = 1;
}
int visited[4];

void dfs(int now, string path) {
    if (now == 3) {
        // 0 ~~~~> 3
        cout << "경로 발견!" << path << "\n";

        return;
    }
    for (int next = 0; next < 4; next++) {
        if (adj[now][next] == 0) continue;
        if (visited[next] == 1) continue; // 이전경로에서 등장 ? 0->a->b->c ->now -> next 
        visited[next] = 1; // 이후 경로에서 next 등장 X
        dfs(next, path + "->" + to_string(next));
        visited[next] = 0; // 원상복구 
    }
}
int main()
{
    input();
    visited[0] = 1; // 이후에 다시 dfs(0) X
    dfs(0, "0"); // 다시 dfs(0)
    return 0;
}