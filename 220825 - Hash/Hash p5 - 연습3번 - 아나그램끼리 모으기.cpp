#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string bucket[1000];
	unordered_map<string, int> um;
	for (int i = 0; i < N; i++)
	{
		cin >> bucket[i];
		sort(bucket[i].begin(), bucket[i].end());
		um[bucket[i]]++;
	}

	int maxi = -1;
	for (auto& i : um)
	{
		maxi = max(maxi, i.second);
	}

	cout << maxi;

	return 0;
}