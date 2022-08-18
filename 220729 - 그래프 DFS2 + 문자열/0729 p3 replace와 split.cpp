//replace 개념!

/*
string str = "#######";

str.insert(3, "AAA");

cout << str << '\n';

str.erase(2, 5); //2번 5글자를 지워라

cout << str;

#include <iostream>
#include <string>
using namespace std;
string bbq = "ABC##KFC##BTS";

void replace(string before, string after) {

	int a = bbq.find(before);

	bbq.erase(a, before.size());
	bbq.insert(a, after);
}

int main() {


	//KFC 라는단어를 MC 변경 (KFC는 단 하나만 존재)
	cout << bbq << '\n';
	replace("KFC", "MC");
	cout << bbq << '\n';
	return 0;
}
*/

// 문자열 찾기와 혼합한 replace
/*
#include <iostream>
#include <string>
using namespace std;
string bbq = "ABC##KFC##BTS##KFC####KFC####KFC";

void replace(string before, string after) {

	int a = 0;
	while (1) {
		a = bbq.find(before, a);
		if (a == -1) break;

		bbq.erase(a, before.size());
		bbq.insert(a, after);

		a++;
	}
}

int main() {

	//KFC 라는단어를 MC 변경 (KFC는 여러개가 존재할 수 있다)

	cout << bbq << '\n';
	replace("KFC", "MC");
	cout << bbq << '\n';
	return 0;
}
*/

/*
// 내 풀이
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string bbq = "ABC##KFC##BTS##KFC###KFC###KFC";

	//KFC라는 단어를 MC로 변경 (KFC는 단 하나만 존재)
	string a = "KFC";
	int idx = -1;
	while (1) {
		idx = bbq.find(a, ++idx);
		if (idx == -1) break;
		bbq.erase(idx, a.size());
		bbq.insert(idx, "MC");
	}

	cout << bbq;

	return 0;
}
*/

//split 스플릿 구현
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string bbq = "ABC|BBQ|KFC|OKCASH";

vector<string> split(string gijun) {
	vector<string> list;

	int a = 0;
	int b = 0;
	string str = bbq + gijun;

	while (1) {
		b = str.find(gijun, a);
		if (b == -1) break;

		//뜯자
		int size = b - a;
		string temp = str.substr(a, size);
		list.push_back(temp);

		a = b + 1;
	}

	return list;
}

int main() {

	vector<string> list = split("|");

	return 0;
}