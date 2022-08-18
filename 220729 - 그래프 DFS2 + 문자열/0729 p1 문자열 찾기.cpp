#include <iostream>
#include <string>
using namespace std;

string str = "ABCATTTABCABC";

int main() {

	int cnt = 0;
	int a = 0;
	while (1) {
		a = str.find("ABC", a);
		if (a == -1) break;

		cout << a << " ";

		a++;
	}
	return 0;
}
/*
// 내 풀이
#include <iostream>
#include <string>
using namespace std;

string str = "ABCATTTABCABC";

int main() {

	int cnt = 0;
	int a = -1;
	while (1) {
		a = str.find("ABC", ++a);
		if (a == -1) break;

		cout << a << " ";
	}
	return 0;
}
*/