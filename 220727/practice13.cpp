#include <iostream>
#include <string>
using namespace std;

int main()
{
	string id = "KFC";
	string psw = "1234";

	string id_input, psw_input;
	cin >> id_input >> psw_input;

	if (id == id_input && psw == psw_input){ cout << "로그인"; }
	else { cout << "로그인 실패"; }
	
	return 0;
}