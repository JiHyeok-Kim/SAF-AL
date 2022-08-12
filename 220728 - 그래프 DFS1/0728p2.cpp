#include <iostream>
using namespace std;

/*
int main()
{
	//입력 정보를 토대로 인접 행렬 방식 저장
	// 4 <= node 개수
	// 6 <= edge 개수
	// 1 2 <= from to 정보가 edge 개수
	// 2 3
	// 2 4
	// 3 4
	// 4 2
	// 4 3

	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;
	int arr[100][100] = { 0, };
	for (int i = 0; i < cntEdge; i++)
	{
		int from, to;
		cin >> from >> to;
		arr[from][to] = 1;
	}

	int de = 1;
	for (int from = 1; from <= cntNode; from++)
	{
		for (int to = 1; to <= cntNode; to++)
		{
			cout << arr[from][to] << " ";
		}
		cout << "\n";
	}

	return 0;
}
*/

int main()
{
	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;
	int arr[100][100] = { 0, };
	for (int i = 0; i < cntEdge; i++)
	{
		int from, to;
		cin >> from >> to;
		arr[from][to] = 1;
		arr[to][from] = 1; // 무방향일 경우 arr[to][from] 을 추가
	}

	int de = 1;
	for (int from = 1; from <= cntNode; from++)
	{
		for (int to = 1; to <= cntNode; to++)
		{
			cout << arr[from][to] << " ";
		}
		cout << "\n";
	}

	return 0;
}