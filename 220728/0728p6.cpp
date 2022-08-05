#include <iostream>
#include <vector>
using namespace std;

// 그래프를 전역변수로 다시 둔다 <= 모든 함수들이 공통적으로 볼 수 있도록
//인접행렬 저장
int arr[6][6] = { 0 }; // - > now가 2인 노드에서 next로 가려면 arr[2][???] => arr[2][to] : 2에서 to로 갈 수 있는가?
int cntNode;


void dfs(int now)// 지금 now라는 node에 있다.
    // now 에서 갈 수 있는 next라는 node로 가라
    // arr[now][???] == 1
    // 특정 node에서 갈 수 있는 node 찾기
{
    // 재귀함수랑 다르게 기저조건이 필수가 아니다
    cout << now << " ";

    for (int next = 1; next <= cntNode; next++)
    {
        if (arr[now][next] == 0) // now => next로 갈 수 있는가?
            continue; // 갈 수 없으면 무시

        dfs(next);
    }
    
    return;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    cin >> cntNode;
    int cntEdge = cntNode - 1;// tree 구조에서는 edge갯수 = node -1
 
    for (int i = 0; i < cntEdge; i++)
    {
        int parent, child; //parent -> child
        cin >> parent >> child;
        arr[parent][child] = 1;
    }

    //DFS : deep first search
    //완전탐색 <- 모든 것을 다 돌려본다.

    // 1. tree에서 모든 node를 전부 다 들려보겠다. <= 재귀
    dfs(2);
    
    return 0;
}