#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string 을 char 버퍼로 복사하는 방법
	string str = "ABCD";
	char buf[10];
	strcpy(buf, str.c_str());

	//char 버퍼를 string으로 복사하는 방법
	char bbq[10] = "ABCDEF";
	string temp = bbq;
}