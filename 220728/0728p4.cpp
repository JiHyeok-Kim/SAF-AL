#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*
	// 저장 인접 행렬 방식
	// 활용 특정 node에서 갈 수 있는 node 찾기

	// 5 8 node edge개수

	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;

	int arr[100][100] = { 0 };

	for (int i = 1; i <= cntEdge; i++) {
		int from, to;
		cin >> from >> to;
		arr[from][to] = 1;
	}

	int node;
	cin >> node;

	for (int to = 0; to < cntEdge; to++) {
		if (arr[node][to])
		{cout << to << " ";}
	}

	return 0;
	*/

	vector<int> v[100];
	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;

	for (int i = 1; i < cntEdge; i++)
	{
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
	}

	int node;
	cin >> node;

	//v[node][0];
	//v[node][1];
	//v[node][2];
	//.....
	//몇 개의 data를 꺼내야 할까? v[node]가 갖고 있는 data갯수 만큼
	//v[node][v[node]가 갖고있는 data 개수 -1]
	for (int i = 0; i < v[node].size(); i++)
	{
		cout << v[node][i] << " ";
	}

	return 0;
}