#include <iostream>
#include <string>
using namespace std;

string strs[4] = { "GOLD#GOLD##", "#GOL#GOLE#GOLED", "GOLD","GGGGOLD#GOLD" };

int main() {

	/* 
	string str = "ABCDEFG";
	string temp = str.substr(3, 2);
	*/
	/*
	문제
	기준 문자열 : ABCDEFG 하드코딩
	a, b 입력
	a index ~ b index 까지 문자열 짤라서 출력
	ex) 2 6 => CDEFG
	*/
	
	string str = "ABCDEFG";

	int a, b;
	cin >> a >> b;


	cout << str.substr(a, b-a+1);

	return 0;
}