#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;



vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    vector<int> answer;
    vector<string> used;
    for (int i = 0; i < id_list.size(); i++)
    {
        answer.push_back(0);
    }

    unordered_map<string, vector<string>> um;
    unordered_map<string, int> mailReturn;

    for (int i = 0; i < id_list.size(); i++)
    {
        for (int j = 0; j < report.size(); j++)
        {
            string str1, str2;
            int len = report[j].length();
            int start = 0;
            int s = report[j].find(" ", start);
            str1 = report[j].substr(0, s);
            str2 = report[j].substr(s + 1, len - s - 1);
            if (str1 == id_list[i]) {
                int flag = 0;
                used.push_back(str2);
                for (int i = 0; i < used.size(); i++)
                {
                    if (used[i] == str2) flag++;
                    if (flag == 2) break;
                }
                if (flag > 1) continue;
                um[id_list[i]].push_back(str2);
            }
        }
        used.clear();
    }

    for (auto& i : um)
    {
        for (int j = 0; j < i.second.size(); j++)
        {
            for (int m = 0; m < id_list.size(); m++)
            {
                if (i.second[j] == id_list[m])
                {
                    mailReturn[id_list[m]]++;
                    break;
                }
            }
        }
    }

    for (auto& i : mailReturn)
    {
        if (i.second - k < 0) i.second = -1;
        else if (i.second - k >= 0) i.second = 1;
        if (i.second == 1)
        {
            for (auto& j : um)
            {
                for (int m = 0; m < j.second.size(); m++)
                {
                    if (i.first == j.second[m]) {
                        for (int n = 0; n < id_list.size(); n++)
                        {
                            if (j.first == id_list[n]) {
                                answer[n]++;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    return answer;
}