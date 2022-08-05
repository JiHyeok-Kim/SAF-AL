#include <iostream> 
#include <string> // C++ 용 string 클래스

//아래 두개는 똑같은 헤더파일
//#include <cstirng> // C언어 string.h
//#include <string.h> // strcmp, strlen 함수
using namespace std;

int main() {
	string str;
	cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		cout << str[i];
	}
}