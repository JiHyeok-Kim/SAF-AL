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
1. �׷��� ����
  - �� node���� ����
2. Queue ����
3. ���۳�� ����
---------------�غ�Ϸ�

4. queue���� node(now)�� �ϳ� ����
    �� ���� ���ѳ��� ������ node
5. now���� �� �� �ִ� node(next)�� ã��
6. next���� queue�� �߰�

7. 4~6�ܰ� �ݺ�
  (�� �̻� ������ �ȵɶ�����
   == queue�� �����������)
*/
int main()
{
    //int cntNode, cntEdge;
    //cin >> cntNode >> cntEdge;
    //int arr[10][10] = {0, }; // ���� ���
    //for (int i = 0; i < cntEdge; i++)
    //{
    //    int from, to;
    //    cin >> from >> to;
    //    arr[from][to] = 1;
    //}//1. �׷��� ����

    //// 2. Queue����
    //queue<int> q;
    //// queue : ������ �ż� �ٸ� node�� ���� ��ų node��
    //int used[10] = { 0, };
    //// index : node��ȣ
    //// value : �����ƴ°�?(������ �� Ÿ�̹� : queue���� ���� �� vs queue�� ���� ��)
    ////         ã�Ҿ��°�?
    //// upgrade : ���ƾ� 2�ٸ� ����


    //// 3. ������ ����
    //used[1] = 1; // �������� ���� ã�Ƽ� �־����. -> ã�Ҵٶ�� ���
    //q.push(1);

    // // ---- ����

    //// �����ƴ� ���� �ٽ� �������� ���ϵ���
    //// ��ȴ� ���� �ٽ� �鸮�� ���ϵ���
    //// DFS <- used, visited, check
    //// used�� �̿��Ͽ� ���� �������״� ���� �ٽ� ������Ű�� ���ϵ���

    //// 7. 4~6�ܰ� �ݺ�
    //while(!q.empty()){
    //    // 4. now������
    //    int now = q.front();
    //    q.pop();

    //    cout << now << " "; //<-now�� ���� �� ��ȴ�!

    //    // 5. now -> nextã��
    //    for (int next = 1; next <= cntNode; next++)
    //    {
    //        if (arr[now][next] == 0) continue;
    //        if (used[next] == 1) continue; // ã�Ҵ� ����� ������ ����

    //        // 6. next�� queue�� �߰�
    //        used[next] = 1; // next�� ã�Ҵ�. ���
    //        q.push(next);
    //    }
    //}



    // ---- used upgrade

    int cntNode, cntEdge;
    cin >> cntNode >> cntEdge;
    int arr[10][10] = { 0, }; // ���� ���
    for (int i = 0; i < cntEdge; i++)
    {
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
    }//1. �׷��� ����

    // 2. Queue����
    queue<int> q;
    // queue : ������ �ż� �ٸ� node�� ���� ��ų node��
    int used[10] = { 0, };
    // index : node��ȣ
    // value : �����ƴ°�?(������ �� Ÿ�̹� : queue���� ���� �� vs queue�� ���� ��)
    //         ã�Ҿ��°�?
    // upgrade : ���ƾ� 2�ٸ� ����(�� ������ ã�Ҵ°�?, �� ���� ���� ������ �߰��� �� �ִ°�?)


    // 3. ������ ����
    used[1] = 1; // �������� ���� ã�Ƽ� �־����. -> ã�Ҵٶ�� ���
    q.push(1);

    // ---- ����

   // �����ƴ� ���� �ٽ� �������� ���ϵ���
   // ��ȴ� ���� �ٽ� �鸮�� ���ϵ���
   // DFS <- used, visited, check
   // used�� �̿��Ͽ� ���� �������״� ���� �ٽ� ������Ű�� ���ϵ���

   // 7. 4~6�ܰ� �ݺ�
    while (!q.empty()) {
        // 4. now������
        int now = q.front();
        q.pop();

        cout << now << " : "; //<-now�� ���� �� ��ȴ�!
        cout << used[now] << "\n";
        // 5. now -> nextã��
        for (int next = 1; next <= cntNode; next++)
        {
            if (arr[now][next] == 0) continue;

            // �Ʒ� 3���� ���ǹ��� ���� ����
            if (used[next] >= 1) continue; // ã�Ҵ� ���(1 : ã�Ҵ�. -> ��� ����� ������ ã�Ҵ�.)�� ������ ����
            //if (used[next] != 0) continue; // ��� ����� ������ ã�Ҵ�.
            //if (used[next]) continue;

            // 6. next�� queue�� �߰�
            used[next] = used[now] + 1; // next�� ã�Ҵ�. ��� -> �� ������ ã�Ҵ°�? -> next��� �� = now��� �� ���� 1�� �� ���� �߰��ߴ�.
            q.push(next);
        }
    }

    return 0;
}