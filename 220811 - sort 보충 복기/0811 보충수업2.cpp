#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> arr = { 32, 12, 5, 3, 21 };

bool compare(int t, int v) {
	// t가 v보다 더 왼쪽에 있어야한다면 true
	// 그렇지 않으면 false;

	if (t >= 10 && v < 10) return true;
	if (t < 10 && v >= 10) return false;
	
	if (t < v) return true;
	return false;
}

int main()
{
	//1.오름차순
	//sort(arr.begin(), arr.end());

	//2. 내림차순
	//sort(arr.begin(), arr.end(), greater<int>());
	
	//3. 다중조건
	//-1. 두자릿수 우선
	//-2. 작은 수 우선
	
	return 0;
}