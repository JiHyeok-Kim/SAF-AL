#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "ABCDEFGHIJKBCD";

	//파싱 : find가 생명

	//BCD가 몇 개 있는지 출력

	int cnt = 0;
	int start = 0;

	while (1) {
	
		int ret = str.find("BCD", start);
		if (ret == -1) break;

		cnt++;
		start = ret + 1;
	}
	cout << cnt;
	
	return 0;
}