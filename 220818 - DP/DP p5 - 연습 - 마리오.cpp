#include <iostream>
using namespace std;

int map[170];
int memo[170];

void sumMap(int i)
{
	if (i - 2 < 0)
	{
		memo[i] = -99999;
		return;
	}
	int a = memo[i - 2] + map[i];
	int b;
	if (i - 7 < 0)
	{
		b = -99999;
	}
	else 
	{
	b = memo[i - 7] + map[i];
	}
	memo[i] = max(a, b);
	return;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> map[i];
	}

	for (int i = 1; i <= n + 7; i++)
	{
		sumMap(i);
		
	}

	int maxi = -999999;
	for (int i = n + 1; i <= n + 7; i++)
	{
		if (memo[i] > maxi) maxi = memo[i];
	}
	cout << maxi;

	return 0;
}