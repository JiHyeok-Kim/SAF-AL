﻿#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<int, int> hm;

    //기본 사용
    hm[10] = 30;
    if (hm.count(10)) cout << hm[10];
    cout << endl;

    //vector 집어넣기
    unordered_map<string, vector<int>> hv;
    hv["huhu"] = { 1, 5, 3, 4, 2, 5 };
    hv["huhu"].push_back(100);

    for (int i = 0; i < hv["huhu"].size(); i++) {
        cout << hv["huhu"][i] << " ";
    }

    return 0;
}