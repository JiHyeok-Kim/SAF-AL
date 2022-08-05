#include <iostream>
#include <vector>
using namespace std;

int main() {

    //C++ 공식 Library
    //수많은 자료구조, 알고리즘이 구현되어있는
    //그래서 가져다 걍 바로쓰면 되는
    //Library = STL 이라고 합니다.
    //Standard Template Library
    //C++에 템플릿 문법, 이 문법을 사용한 Lib

    vector<int> arr = { 1, 2, 3, 4, 5, 7 };

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }

    //1차원 배열에 없는 기능
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(99);

    return 0;
}