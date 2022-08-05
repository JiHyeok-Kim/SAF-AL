#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
	int nd;
	int dist;
};


int result[1001];


bool operator<(Node v, Node t)
{
	return t.dist < v.dist;
}

priority_queue<Node> pq;


int main()
{
	int N;
	cin >> N;
	vector<vector<Node>> alist(N + 1);
	int M;
	cin >> M;

	for (int i = 1; i <= M; i++) {

		int a, b, c;
		cin >> a >> b >> c;
		alist[a].push_back({ b, c });
	}

	int start, arrival;
	cin >> start >> arrival;

	for (int i = 1; i <= N; i++) 
	{
		result[i] = 21e8;
	}
	result[start] = 0;

	pq.push({ start, 0 });

	while (!pq.empty())
	{

		Node now = pq.top();
		pq.pop();

		if (result[now.nd] < now.dist) continue;

		for (int i = 0; i < alist[now.nd].size(); i++)
		{
			Node next = alist[now.nd][i];

			if (now.dist + next.dist >= result[next.nd]) continue;
			result[next.nd] = now.dist + next.dist;
			pq.push({ next.nd, now.dist + next.dist });
		}
	}

	cout << result[arrival];

	return 0;
}