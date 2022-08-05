#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "ABC[3512]DEFG";
	
	int a = str.find("[");
	int b = str.find("]", a);
	int c = b - a;

	int num = stoi(str.substr(a+1, c-1)) + 77;
	cout << num;

	return 0;
}