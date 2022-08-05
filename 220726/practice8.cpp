#include <iostream>
using namespace std;

int arr[2][2] = {
    1, 5,
    1, 1
};
int map[4][5] = {
    1, 5, 4, 9, 9,
    1, 1, 5, 4, 9,
    1, 1, 1, 1, 1,
    1, 5, 4, 9, 1
};

int isSame(int dy, int dx) {
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 2; x++) {
            if (arr[y][x] != map[dy + y][dx + x]) return 0;
        }
    }
    return 1;
}

int main() {

    int cnt = 0;
    for (int y = 0; y <= 2; y++) {
        for (int x = 0; x <= 3; x++) {
            cnt += isSame(y, x);
        }
    }
    cout << cnt;

    return 0;
}