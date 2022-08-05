#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[6];
int cntNode;

void dfs(int now)
{
	cout << now << " ";

	for (int i = 1; i <= arr[now].size(); i++)
	{
		int next = arr[now][i];

		dfs(next);
	
	}

	return;
}

int main()
{
	cin >> cntNode;
	
	for (int i = 0; i < cntNode - 1; i++) 
	{
		int parent, child;
		cin >> parent >> child;

		arr[parent].push_back(child);

	}

	dfs(2);
	
	return 0;
}