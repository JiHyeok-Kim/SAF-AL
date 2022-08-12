#include <iostream>
using namespace std;

int main()
{
    int arr[4][5] = {
        5, 6, 7, 8, 9,
        1, 1, 1, 1, 1,
        0, 0, 0, 0, 0,
        1, 1, 1, 1, 1
    };

    int directY[5] = { -1, -1, 1, 1, 0 };
    int directX[5] = { -1 , 1, -1, 1, 0 };

    int by = 1;
    int bx = 2;
    int sum = 0;
    for (int t = 0; t < 5; t++) {
        int ny = by + directY[t];
        int nx = bx + directX[t];

        if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
        sum += arr[ny][nx];
    }



    return 0;
}