#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int N;
unordered_map<string, string> um;
string ans[1000];

string findBoss(string tar)
{
	if (um[tar] == "") return tar;

	string ret = findBoss(um[tar]);
	um[tar] = ret;
	return ret;
}

void unionGroup(string a, string b)
{
	string t1 = findBoss(a);
	string t2 = findBoss(b);
	if (t1 == t2) return;

	um[t2] = t1;

	return;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a, b;
		cin >> a >> b;
		unionGroup(a, b);
	}

	string str;
	cin >> str;

	int j = 0;
	for (auto& i : um) {
		if (findBoss(i.first) == findBoss(str)) {
			ans[j] = i.first;
			j++;
		}
	}

	sort(ans, ans + j);
	for (int i = 0; i < j; i++) {
		cout << ans[i] << "\n";
	}

	return 0;
}