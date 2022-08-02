#include <iostream>
#include <queue>
#include <vector>
using namespace std;
/*
9 9
1 2
1 7
2 3
3 4
3 8
4 5
4 6
8 9
7 3
*/
/*
1. 그래프 구성
  - 각 node간의 관계
2. Queue 생성
3. 시작노드 세팅
---------------준비완료

4. queue에서 node(now)를 하나 꺼냄
    ㄴ 감염 시켜나갈 예정인 node
5. now에서 갈 수 있는 node(next)들 찾기
6. next들을 queue에 추가

7. 4~6단계 반복
  (더 이상 감염이 안될때까지
   == queue가 비워질때까지)
*/
int main()
{
    //int cntNode, cntEdge;
    //cin >> cntNode >> cntEdge;
    //int arr[10][10] = {0, }; // 인접 행렬
    //for (int i = 0; i < cntEdge; i++)
    //{
    //    int from, to;
    //    cin >> from >> to;
    //    arr[from][to] = 1;
    //}//1. 그래프 구성

    //// 2. Queue생성
    //queue<int> q;
    //// queue : 감염이 돼서 다른 node를 감염 시킬 node들
    //int used[10] = { 0, };
    //// index : node번호
    //// value : 감염됐는가?(감염이 된 타이밍 : queue에서 꺼낼 때 vs queue에 넣을 때)
    ////         찾았었는가?
    //// upgrade : 많아야 2줄만 수정


    //// 3. 시작점 세팅
    //used[1] = 1; // 시작점은 직접 찾아서 넣어줬다. -> 찾았다라고 기록
    //q.push(1);

    // // ---- 세팅

    //// 감염됐던 점은 다시 감염되지 못하도록
    //// 들렸던 점을 다시 들리지 못하도록
    //// DFS <- used, visited, check
    //// used를 이용하여 내가 감염시켰던 점을 다시 감염시키지 못하도록

    //// 7. 4~6단계 반복
    //while(!q.empty()){
    //    // 4. now꺼내기
    //    int now = q.front();
    //    q.pop();

    //    cout << now << " "; //<-now로 꺼낼 때 들렸다!

    //    // 5. now -> next찾기
    //    for (int next = 1; next <= cntNode; next++)
    //    {
    //        if (arr[now][next] == 0) continue;
    //        if (used[next] == 1) continue; // 찾았던 기록이 있으면 무시

    //        // 6. next를 queue에 추가
    //        used[next] = 1; // next를 찾았다. 기록
    //        q.push(next);
    //    }
    //}



    // ---- used upgrade

    int cntNode, cntEdge;
    cin >> cntNode >> cntEdge;
    int arr[10][10] = { 0, }; // 인접 행렬
    for (int i = 0; i < cntEdge; i++)
    {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
    }//1. 그래프 구성

    // 2. Queue생성
    queue<int> q;
    // queue : 감염이 돼서 다른 node를 감염 시킬 node들
    int used[10] = { 0, };
    // index : node번호
    // value : 감염됐는가?(감염이 된 타이밍 : queue에서 꺼낼 때 vs queue에 넣을 때)
    //         찾았었는가?
    // upgrade : 많아야 2줄만 수정(몇 번만에 찾았는가?, 몇 개의 점을 지나서 발견할 수 있는가?)


    // 3. 시작점 세팅
    used[1] = 1; // 시작점은 직접 찾아서 넣어줬다. -> 찾았다라고 기록
    q.push(1);

    // ---- 세팅

   // 감염됐던 점은 다시 감염되지 못하도록
   // 들렸던 점을 다시 들리지 못하도록
   // DFS <- used, visited, check
   // used를 이용하여 내가 감염시켰던 점을 다시 감염시키지 못하도록

   // 7. 4~6단계 반복
    while (!q.empty()) {
        // 4. now꺼내기
        int now = q.front();
        q.pop();

        cout << now << " : "; //<-now로 꺼낼 때 들렸다!
        cout << used[now] << "\n";
        // 5. now -> next찾기
        for (int next = 1; next <= cntNode; next++)
        {
            if (arr[now][next] == 0) continue;

            // 아래 3가지 조건문은 전부 같음
            if (used[next] >= 1) continue; // 찾았던 기록(1 : 찾았다. -> 어떠한 기록이 있으면 찾았다.)이 있으면 무시
            //if (used[next] != 0) continue; // 어떠한 기록이 있으면 찾았다.
            //if (used[next]) continue;

            // 6. next를 queue에 추가
            used[next] = used[now] + 1; // next를 찾았다. 기록 -> 몇 번만에 찾았는가? -> next라는 점 = now라는 점 보다 1번 더 가서 발견했다.
            q.push(next);
        }
    }

    return 0;
}