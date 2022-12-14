#include <iostream>
using namespace std;

int arr[8] = { 1, 2, 3, 5, 7, 8, 10, 12 };
int target = 10;

int bs(int s, int e) 
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {

    int ret = bs(0, 7);

    if (ret == -1) cout << "미발견!";
    else {
        cout << ret << "에서 발견";
    }

    return 0;
}