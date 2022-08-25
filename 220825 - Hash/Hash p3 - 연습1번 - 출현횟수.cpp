#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	unordered_map<int, int> um;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		um[num]++;
	}
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		if (um.count(num)) cout << um[num] << " ";
		else cout << 0 << " ";
	}

	return 0;
}