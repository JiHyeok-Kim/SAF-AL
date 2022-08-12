#include <iostream>
#include <string>
using namespace std;

string str = "ABC[3512]DEFGF[211]DSFSD[36346]";

int getNums(int a, int b) {

	int size = b - a - 1;
	string temp = str.substr(a + 1, size);
	int nums = stoi(temp);
	return nums;
}

int main() {
	//[ ]에 있는 수들 합 출력

	//getNums(a, b) 그 수를 리턴
	//ex) getNums(3, 8) = 3512 리턴

	int a = 0;
	int b = 0;
	int sum = 0;
	while (1) {
		a = str.find('[', a);
		if (a == -1) break;

		b = str.find(']', a + 1);
		sum += getNums(a, b);

		a = b + 1;
	}
	cout << sum;

	return 0;
}