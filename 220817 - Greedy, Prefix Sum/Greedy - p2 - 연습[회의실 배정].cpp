#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
	int s, e;
	int sec;
};

bool cmp(Node t, Node v){
	if (t.e < v.e) return 1;
	if (t.e > v.e) return 0;
	if (t.sec < v.sec) return 1;
	if (t.sec > v.sec) return 0;
	return t.s < v.s;
}

Node arr[100000];

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> arr[i].s >> arr[i].e;
		arr[i].sec = arr[i].e - arr[i].s;
	}
	sort(arr, arr + N, cmp);

	int ans = 1;
	int time = arr[0].e;

	for (int i = 1; i < N; i++) {
		if (arr[i].s >= time){
			ans++;
			time = arr[i].e;
		}
	}
	cout << ans;

	return 0;
}