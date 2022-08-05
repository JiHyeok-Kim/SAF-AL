#include <iostream>
#include <vector>
using namespace std;


int main()
{
	/*
	//인접 리스트
	vector<int> v[100]; // vector <>= <벡터 안에 어떤 datd형태를 저장할 것인가? >
	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;
	for (int i = 0; i < cntEdge; i++) {
		int from, to;
		cin >> from, to;
		v[from].push_back(to); 
		// vector.push_back(data)vector의 맨 뒤에 공간을 추가하여 data를 저장
		// 인접리스트를 저장하는 방식
	}
	*/

	vector<int> v[100];
	int cntNode, cntEdge;
	cin >> cntNode >> cntEdge;
	for (int i = 0; i < cntEdge; i++)
	{
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from); // 무방향일 경우 v[to].push_back(from);을 추가
	}
}