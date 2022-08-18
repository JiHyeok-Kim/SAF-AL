#include <iostream>
using namespace std;

int memo[100000];

int fibo(int th) 
{
	if (memo[th] != 0) return memo[th];
	if (th == 2) return 1;
	if (th == 1) return 0;

	int a = fibo(th - 1);
	int b = fibo(th - 2);

	memo[th] = a + b;
	return a + b;
}

int main()
{
	int th;
	cin >> th;

	cout << fibo(th);

	return 0;
}