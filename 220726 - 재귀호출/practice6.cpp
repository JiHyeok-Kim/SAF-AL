#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[4] = { 1, 5, 7, 9 };

int isSame() {
    for (int i = 0; i < 4; i++) {
        if (arr1[i] != arr2[i]) return 0;
    }
    return 1;
}

int main()
{
    if (isSame() == 1) cout << "O";
    else cout << "X";

    return 0;
}