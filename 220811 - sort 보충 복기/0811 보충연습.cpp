#include <iostream>
#include <string>
using namespace std;

string n;

void fn(string n)
{
	int sum = 0;
	for (int i = 0; i < n.length(); i++) {
		sum += int(n[i]) - 48;
	}

	return sum;
}

int main()
{
	int tc; 
	cin >> tc;
	for (int tcN = 1; tcN <= tc; tcN++) {
		cin >> n;

		while (1) {
			if (fn(n) < 10) break;
			n = to_string(fn(n));
		}
		cout << "#" << tcN << " " << fn(n) << \n;
	}
	return 0;
}