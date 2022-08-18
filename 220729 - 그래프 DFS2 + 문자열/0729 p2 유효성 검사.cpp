/*
//아이디 기초 조건 문제1 및 풀이
#include <iostream>
#include <string>
using namespace std;

int isValid(string id){
	//1. 대문자, 숫자로만 구성
	for (int i = 0; i < id.size(); i++) {
		char ch = id[i];
		if (ch >= 'A' && ch <= 'Z') continue;
		if (ch >= '0' && ch <= '9') continue;
	}

	//2. 8글자
	if (id.size() >= 8) return 0;

	//3. 첫글자 숫자 금지
	if (id[0] >= '0' && id[0] <= '9') return 0;

	//4. 탈락조건 

	//5. 탈락조건 ...... // "[A-Z];[0-9]" 정규표현식
}

int main()
{
	string id;
	cin >> id;

	if (isValid(id)) cout << "yes";
	cout << "no";
	return 0;
}
*/

/*
// 내 풀이1
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str.size() >= 8) { cout << "no"; return 0; }
		if ('0' <= str[0] && str[0] <= '9') { cout << "no"; return 0; }
		if ('A' <= str[i] && str[i] <= 'Z') { continue; }
		else if ('0' <= str[i] && '9' >= str[i]) { continue; }
		else { cout << "no"; return 0; }
	}

	cout << "yes";
	return 0;
}
*/

/*
// 아이디 검증 id@ssafy.com 문제2 및 풀이
#include <iostream>
#include <string>
using namespace std;

int isValid(string email) {
	//1. @, . 대소문자 숫자로 구성되어있는지 확인
	for (int i = 0; i < email.size(); i++) {
		char ch = email[i];
		if (ch >= 'A' && ch <= 'Z') continue;
		if (ch >= 'a' && ch <= 'z') continue;
		if (ch >= '0' && ch <= '9') continue;
		if (ch == '@' || ch == '.') continue;
		return 0;
	}

	//2. @ . 이 각각 1개인지 검사
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < email.size(); i++) {
		if (email[i] == '@') cnt1++;
		if (email[i] == '.') cnt2++;
	}
	if (cnt1 != 1 || cnt2 != 1) return 0;

	//3. @ 다음에 . 이 나오는지 검사
	int a = email.find('@');
	int b = email.find('.', a + 1);
	if (b == -1) return 0;

	//4. @, . 이 각각 맨앞과 맨뒤면 탈락
	if (a == 0 || b == email.size() - 1) return 0;

	//5. @랑 . 사이에 문자가 존재
	if (a + 1 == b) return 0;

	return 1;
}

int main() {

	string email = "ABC@BBQ.com";

	if (isValid(email)) cout << "OK";
	else cout << "NO";

	return 0;
}
*/

/*
//내 풀이2
#include <iostream>
#include <string>
using namespace std;
string str;

int isValid(string id)
{
	int a = str.find('@', 0);
	//@전 대소문자, 숫자 가능
	for (int i = 0; i < a; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') { continue; }
		if ('a' <= str[i] && str[i] <= 'z') { continue; }
		if ('0' <= str[i] && str[i] <= '9') { continue; }
		else { return 0; }
	}

	int b = str.find('.', a);
	//@이후 . 전까지 형태
	for (int i = a + 1; i < b; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z') { continue; }
		if ('a' <= str[i] && str[i] <= 'z') { continue; }
		if ('0' <= str[i] && str[i] <= '9') { continue; }
		else { return 0; }
	}

	//.이후 com
	if (str[b + 1] != 'c') { return 0; }
	if (str[b + 2] != 'o') { return 0; }
	if (str[b + 3] != 'm') { return 0; }

	return 1;
}

int main()
{
	cin >> str;

	if (isValid(str) == 1) { cout << "yes"; return 0; }
	cout << "no";

	return 0;
}
*/