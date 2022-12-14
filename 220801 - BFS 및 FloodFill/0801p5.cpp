#include <iostream>
#include <queue>
#include <vector>
using namespace std;
/*
9 10
1 2
1 7
2 3
3 4
3 8
4 5
4 6
8 9
7 3
8 6
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

// 고려사항
1. 갔던 점을 또 가게 되는가? (찾았던 점을 또 찾게 되는가????) <- used로 해결


*/
int main()
{
    //int cntNode, cntEdge;
    //cin >> cntNode >> cntEdge;
    //int arr[10][10] = { 0, }; // 인접 행렬
    //for (int i = 0; i < cntEdge; i++)
    //{
    //    int from, to;
    //    cin >> from >> to;
    //    arr[from][to] = 1;
    //}//1. 그래프 구성

    //// 2. Queue생성
    //queue<int> q;
    //int used[10] = { 0, }; // index : node번호, value : 해당 점을 찾았는가?
    //int cnt[10] = {0, }; // index : node번호, value : 최대한 적은 점을 들려서 가는 '방법의 수'

    //// 3. 시작점 세팅
    //used[1] = 1; // 시작점은 직접 찾았으니 직접 기록
    //cnt[1] = 1; // 시작점은 1가지 방법이 확정이니 직접 기록
    //q.push(1);

    //// 7. 4~6단계 반복
    //while(!q.empty()){
    //    // 4. now꺼내기
    //    int now = q.front();
    //    q.pop();

    //    // -----------
    //    // 실제로 들렸을 때 기준으로 처리
    //    cout << now << " : " << cnt[now] << "\n";
    //    // -----------

    //    // 5. now -> next찾기
    //    for (int next = 1; next <= cntNode; next++)
    //    {
    //        // -------------
    //        // now -> next로 갈 수 있는지 없는지 여부(조건 여부)
    //        if (arr[now][next] == 0) continue;
    //        // -------------

    //        // ----------------
    //        // 찾았을 때를 기준으로 처리 ( 일단 찾았으면 계산 )
    //        cnt[next] += cnt[now]; // now->next로 가는 방법을 찾았다. now까지 오는 방법의 수만큼 next로 가는 방법을 추가적으로 찾았다.
    //        // 추가 될 수 있는가?(option)
    //        // 6. next를 queue에 추가
    //        if (used[next] != 0) continue; // 찾았던 기록이 있으면 무시
    //        used[next] = 1; // next를 찾았다라고 기록
    //        q.push(next);
    //        // ---------------
    //    }
    //}



    /*
9
1 2 5
1 7 10
2 3 1
3 4 2
3 8 3
4 5 5
4 6 7
8 9 4

    */


    int cntNode;
    cin >> cntNode;
    int arr[10][10] = { 0, }; // 인접 행렬
    for (int i = 0; i < cntNode - 1; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        arr[from][to] = cost;
    } // 1. 그래프 구성

    // 2. Queue 생성
    queue<int> q; // queue에 넣는 정보 : node정보
    int dist[10] = { 0, }; // index : 노드 번호, value : 해당 node까지의 거리

    // 3. 시작노드 세팅
    dist[1] = 0;
    q.push(1); // 1번점이 시작점이므로 넣어줌

    //7. 4~6단계 반복
    while (!q.empty()) // queue가 비워지지 않았다 : 감염 시켜나갈 예정인 node가 남았다.
    {
        //4. queue에서 node(now)를 하나 꺼냄
        int now = q.front(); // now : 이번에 감염을 시켜나갈 node
        q.pop();

        cout << now << ":" << dist[now] << "\n";

        // 5. now에서 갈 수 있는 node(next)들 찾기
        for (int next = 1; next <= 9; next++)
        {
            if (arr[now][next] == 0) continue; // now->next로 가지 못하면 무시

            // now가 next를 감염시킬 수 있다.
            // -------- 새로운 next라는 점을 찾았다.

            // 6. next들을 queue에 추가
            dist[next] = dist[now] + arr[now][next];
            q.push(next);
        }
    }

    // 들렸을 때 처리 : now만보고 계산 할 수 있을 때
    // 찾았을 때 처리 : now,next의 두가지를 같이 확인할때
    // next까지의 거리 = now까지의 거리 + (now->next)의 거리    <= (처리, 계산) now,next


    return 0;
}