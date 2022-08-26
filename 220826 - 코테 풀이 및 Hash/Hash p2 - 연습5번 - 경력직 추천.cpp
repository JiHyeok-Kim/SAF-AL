#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int N;
unordered_map<int, vector<string>> um;

void process(string ord, int id, string name)
{

	if (ord == "recommand")
	{
		um[id].push_back(name);
		int cnt = 0;
		for (auto& i : um[id])
		{
			cnt++;
		}
		cout << cnt << "\n";
	}

	if (ord == "print")
	{
		if (!um.count(id)) {
			cout << "none" << "\n";
			return;
		}
		for (auto& i : um[id])
		{
			cout << i << " ";
		}
		cout << "\n";
	}

	if (ord == "whois")
	{
		int th = 0;
		int flag = 0;
		int bucket[100];
		for (auto& i : um)
		{
			for (int j = 0; j < i.second.size(); j++)
			{
				if (i.second[j] == name) {
					flag = 1;
					bucket[th] = i.first;
					th++;
				}
			}
		}
		sort(bucket, bucket + th);
		if (flag == 1) {
			for (int i = 0; i < th; i++) {
				cout << bucket[i] << " ";
			}
		}
		if (flag == 0) cout << "none";
		cout << "\n";
	}

	return;
}

int main()
{
	//freopen_s(new FILE*, "input.txt", "r", stdin);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string ord, name;
		int id = 0;
		cin >> ord;
		if (ord == "whois") {
			cin >> name;
			process(ord, id, name);
			continue;
		}
		cin >> id;
		if (ord == "print") {
			process(ord, id, name);
			continue;
		}
		cin >> name;
		process(ord, id, name);
	}

	return 0;
}