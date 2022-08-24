#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<int, char> um;

	um[1548] = 'A';
	um[-123] = 'E';

	cout << um[1548];

	return 0;
}  