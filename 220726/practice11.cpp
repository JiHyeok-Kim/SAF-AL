#include <iostream>
using namespace std;

int path[5];

void run(int lev)
{
    if (lev == 2)
    {
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = (i + 1);
        run(lev + 1);
        path[lev] = 0;
    }

    return;
}

int main()
{
    run(0);

    return 0;
}