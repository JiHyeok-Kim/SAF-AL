#include <iostream>
using namespace std;

int arr[4][5] = {
    5, 6, 7, 8, 9,
    1, 1, 1, 1, 1,
    2, 2, 2, 2, 2,
    1, 1, 1, 1, 1
};

int getJumsu(int by, int bx) {
    //한 지점에서 다섯방향 곱 구해서 리턴해줌
    int directY[5] = { -1, 1, 0, 0, 0 };
    int directX[5] = { 0, 0, 1, -1, 0 };

    int gop = 1;
    for (int t = 0; t < 5; t++) {
        int ny = by + directY[t];
        int nx = bx + directX[t];

        if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
        gop *= arr[ny][nx];
    }
    return gop;
}

int main()
{
    int maxi = 0;
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 5; x++) {
            int ret = getJumsu(y, x);
            if (ret > maxi) maxi = ret;
        }
    }
    cout << maxi;


    return 0;
}