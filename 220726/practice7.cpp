#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[12] = { 1, 1, 1, 5, 1, 5, 4, 9, 1, 5, 4, 9 };

int isSame(int index) {

    for (int i = 0; i < 4; i++) {
        if (arr1[i] != arr2[index + i]) return 0;
    }
    return 1;

    //for (int i = index; i < index + 4; i++) {
    //    if (arr1[i - index] != arr2[i]) return 0;
    //}
}

int main() {

    int cnt = 0;
    for (int i = 0; i <= (12 - 4); i++) {
        cnt += isSame(i);
    }
    cout << cnt;

    return 0;
}