#include <iostream>
using namespace std;

int path[5];
void run(int lev) {
    if (lev == 4) {
        for (int i = 0; i < lev; i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 2; i++) {
        path[lev] = 1 + i;
        run(lev + 1);
        path[lev] = 0;
    }
}
int main() {

    run(0);

    return 0;
}