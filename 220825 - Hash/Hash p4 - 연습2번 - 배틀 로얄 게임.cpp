#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string coco;
	string cocofr;
	unordered_map<string, vector<int>> um;

	for (int i = 0; i < N; i++)
	{
		string str;
		int n;
		cin >> str;
		cin >> n;
		um[str].push_back(n);
	}

	cin >> coco;
	cin >> cocofr;
	cout << um[coco].size() << " ";
	int sumC = 0;
	for (int i = 0; i < um[coco].size(); i++)
	{
		sumC += um[coco][i];
	}
	cout << sumC << "\n";

	cout << um[cocofr].size() << " ";
	int sumF = 0;
	for (int i = 0; i < um[cocofr].size(); i++)
	{
		sumF += um[cocofr][i];
	}
	cout << sumF << "\n";
	if (sumC > sumF) cout << coco;
	else if (sumF > sumC) cout << cocofr;
	return 0;
}