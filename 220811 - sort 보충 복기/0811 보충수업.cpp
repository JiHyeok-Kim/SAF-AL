#include <iostream>
#include <algorithm>
using namespace std;

int arr[10] = { 4,3 ,5,1,2,1,2,1,3,5 };

// 어떤 아규먼트에 어떤 값이 들어가던말던 신경안쓰고
// t가 v보다 더 왼쪽에 배치될 애라면 tre
// 아니면 false
// 비교자
bool compare(int t, int v) {
	// t랑 v가 어떤 숫자가 대입될지는 모른다
	if (t < v) return true;
	return false;
}

int main()
{
	//1. 오름차순
	//sort(arr, arr + 10);
	
	//2. 내림차순
	//sort(arr, arr + 10, greater<int>());

	//3. Custom Compare 사용 
	// 다중 조건;
	return 0;
}
