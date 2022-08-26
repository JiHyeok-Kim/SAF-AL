#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<string, unordered_set<string>> singoList;
unordered_map<string, int> singoCnt;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    //1. 신고한 사람 정리
    for (int i = 0; i < report.size(); i++) {
        int blank = report[i].find(' ');
        string from = report[i].substr(0, blank);
        string to = report[i].substr(blank + 1);

        if (singoList[from].count(to)) continue;
        singoList[from].insert(to);
        singoCnt[to] += 1;
    }

    //2. 신고 횟수 계산
    vector<int> answer(id_list.size());

    for (int i = 0; i < id_list.size(); i++) {
        if (singoList.count(id_list[i]) == 0) continue;

        int cnt = 0;
        for (auto& name : singoList[id_list[i]]) {
            int kn = singoCnt[name];
            if (kn >= k) cnt++;
        }
        answer[i] = cnt;
    }