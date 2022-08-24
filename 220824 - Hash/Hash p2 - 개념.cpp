#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um;
vector<string> v = { "huhu", "hot", "bts", "mc", "hot", "hot" };

unordered_map<string, string> um2;

int main()
{

	for (int i = 0; i < v.size(); i++)
	{
		um[v[i]]++;
	}

	string str;
	cin >> str;

	if (um.count(str))
	{
		cout << um[str];
	}

	cout << "\n";
	//또한 value의 vector 형식도 가능
	um2["oh!"] = { 1,5,4,4,2,3 };
	for (int i = 0; i < um2["oh!"].size(); i++) {
		cout << um2["oh!"][i];
	}

	return 0;
}