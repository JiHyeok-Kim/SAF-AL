/*
#include <iostream>
#include <algorithm>
using namespace std;

int arr[10] = { 1,5,7,7,3,0,8,2 };

int main()
{
	//sort(&arr[0], &arr[8]);
	//오름차순
	sort(arr, arr + 8); // 위와 현재 줄의 코드는 같은 뜻을 의미한다.

	//내림차순
	sort(arr, arr + 8, greater<int>());

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
*/




/*
//정렬하는데 우선순위
//1. 짝수우선
//2. 작은수 우선

bool compare(int t, int v) {
	//t를 기준으로 t가 v보다 우선순위가 더 높다? 1 리턴
	//아님 0이고

	if (t % 2 == 0 && v % 2 == 1) return 1;
	if (t % 2 == 1 && v % 2 == 0) return 0;

	return t < v;
}
*/

/*
int main() {

	vector<int> arr = { 1, 5, 3, 2, 8, 6, 6, 8, 9 };

	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int t, int v) {
	//t를 기준으로 t가 v보다 우선수위가 더 높다 ? 1리턴
	//아님 0이다
}

int main()
{
	//지역변수는 10만개 넘어가면 
	//전부 전역으로 ㄱㄱ

	int x;
	int arr[100][100];
	//int arr[1000][1000];
	//128kb~2MB => 최소로 잡으면 3만 2천개가 제한

	return 0;
}
*/

/*
//내 풀이 사진3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	char ch;
	int n;
};

bool compare(Node x, Node y)
{
	cout << x.ch << x.n << " " << y.ch << y.n << "\n";
	if (x.ch < y.ch) return 1;
	if (x.ch > y.ch) return 0;

	//if (x.n > v.n) return 1;
	//return 0;
	return x.n > y.n;
}

int main()
{
	vector<Node> arr = { {'A', 3}, {'B', 9}, {'C', 2}, {'D', 1 }, {'A', 1}, {'C', 9} };

	sort(arr.begin(), arr.end(), compare);

	for (Node n : arr) {
		cout << n.ch << " " << n.n << "\n";
	}

	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	int n;
	char ch;
};
*/


//사진 3
bool compare(Node t, Node v) {
	//t가 v보다 우선순위 높으면 1
	//그렇지 않으면 0 리턴


	//1번 조건 문자 작은것
	if (t.ch < v.ch) return 1;
	if (t.ch > v.ch) return 0;

	//if (t.n > v.n) return 1;
	//return 0;

	return t.n > v.n;
}

int main() {

	vector<Node> arr;
	arr.push_back({ 3, 'A' });
	arr.push_back({ 9, 'B' });
	arr.push_back({ 2, 'C' });
	arr.push_back({ 1, 'D' });
	arr.push_back({ 1, 'A' });
	arr.push_back({ 9, 'C' });

	sort(arr.begin(), arr.end(), compare);

	return 0;
}
