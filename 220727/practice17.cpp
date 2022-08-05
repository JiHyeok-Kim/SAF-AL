#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	n += 100;

	string strN = to_string(n);
	cout << strN[0] << " " << strN[strN.length()-1];

	return 0;
}