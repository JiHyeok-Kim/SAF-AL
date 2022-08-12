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
    int by = 1;
    int bx = 2;
    int sum = 0;
    //sum += arr[by - 1][bx + 0];
    //sum += arr[by + 1][bx + 0];
    //sum += arr[by + 0][bx - 1];
    //sum += arr[by + 0][bx + 1];
    int directY[4] = { -1, 1, 0, 0 };
    int directX[4] = { 0, 0, -1, 1 };
    for (int t = 0; t < 4; t++) {
        int nextY = by + directY[t];
        int nextX = bx + directX[t];
        if (nextY < 4 && nextY >= 0 && nextX >= 0 && nextX < 5) {
            sum += arr[nextY][nextX];
        }
    }
    cout << sum;

    return 0;
}