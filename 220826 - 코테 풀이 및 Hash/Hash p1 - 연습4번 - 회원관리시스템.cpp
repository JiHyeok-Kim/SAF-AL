#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int N;
unordered_map<string, vector<int>> um;
int cntLog;
int cntReg;

void process(string ord, string id, int pwd, int newpwd)
{
	if (ord == "reg")
	{
		if (um.count(id)) {
			if (um[id][0] == -1) {
				um[id] = { pwd, 0 };
				cntReg++;
				cout << "welcome" << " " << cntReg << "\n";
				return;
			}
			cout << "reg fail" << "\n";
			return;
		}

		um[id] = { pwd, 0 };
		cntReg++;
		cout << "welcome" << " " << cntReg << "\n";
		return;
	}

	if (ord == "login")
	{
		if (!um.count(id)) {
			cout << "login fail" << "\n";
			return;
		}
		if (um.count(id)) {
			if (um[id][0] != pwd || um[id][1] == 1) cout << "login fail" << "\n";
			else {
				cntLog++;
				um[id][1] = 1;
				cout << "login" << " " << cntLog << "\n";
			}
			return;
		}
	}

	if (ord == "change")
	{
		if (!um.count(id)) {
			cout << "change fail" << "\n";
			return;
		}
		if (um.count(id)) {
			if (um[id][0] != pwd) cout << "change fail" << "\n";
			else {
				um[id][0] = newpwd;
				cout << "success" << "\n";
			}
			return;
		}
	}

	if (ord == "logout")
	{
		if (!um.count(id)) {
			cout << "logout fail" << "\n";
			return;
		}
		if (um.count(id)) {
			if (um[id][1] == 0 || um[id][0] == -1) {
				cout << "logout fail" << "\n";
				return;
			}
			cntLog--;
			um[id][1] = 0;
			cout << "logout" << " " << cntLog << "\n";
		}
		return;
	}

	if (ord == "bye")
	{
		if (!um.count(id)) {
			cout << "bye fail" << "\n";
			return;
		}
		if (um.count(id)) {
			if (um[id][1] == 0 || um[id][0] == -1) cout << "bye fail" << "\n";
			else if (um[id][1] == 1) {
				cntLog--;
				cntReg--;
				um[id][0] = -1;
				cout << "bye" << " " << cntReg << "\n";
			}
		}
		return;
	}

	return;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	//freopen_s(new FILE*, "input.txt", "r", stdin);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string ord, id;
		int pwd = 0, newpwd = 0;
		cin >> ord;
		cin >> id;
		if (ord == "logout" || ord == "bye") {
			process(ord, id, pwd, newpwd);
			continue;
		}
		cin >> pwd;
		if (ord == "change") cin >> newpwd;

		process(ord, id, pwd, newpwd);
	}

	return 0;
}