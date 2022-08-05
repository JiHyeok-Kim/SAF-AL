/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;

        v.push_back(n);
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }

    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {

    //<> C++ 템플릿 문법
    //STL 스텐다드 템플릿 라이브러리

    vector<int> t = { 3, 4, 5 };

    vector<vector<int>> v = {
        {1, 4, 3, 6, 4},
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {8, 8, 67, 5, 4, 3}
    };


    cout << v[3].size();


    v[2].push_back(119); //{5, 6, 7, 8, 119}

    v.push_back({ 1, 2, 3, 4 });

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
    }

    return 0;


    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> bbq(vector<vector<int>> arr) {
    swap(arr[0], arr[1]);

    return arr;
}

int main() {

    vector<vector<int>> m = {
        {1, 5, 4},
        {1, 9, 9}
    };

    vector<vector<int>> z = bbq(m);

    for (int y = 0; y < z.size(); y++) {
        for (int x = 0; x < z[y].size(); x++) {
            cout << z[y][x];
        }
        cout << endl;
    }

    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> alist;
    //얼제이젼씨 리스트

    alist.push_back({});
    alist.push_back({});
    alist.push_back({});
    alist.push_back({});
    alist.push_back({});

    alist[1].push_back(2);
    alist[2].push_back(4);
    alist[3].push_back(2);
    alist[3].push_back(1);
    alist[4].push_back(3);


    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> alist(5);
    alist[1] = { 2 };
    alist[2] = { 4 };
    alist[3] = { 2, 1 };
    alist[4] = { 3 };

    return 0;
}

*/

/*
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<vector<int>> alist(5);
    alist[1] = { 2 };
    alist[2] = { 4 };
    alist[3] = { 2, 1 };
    alist[4] = { 3 };

    int n;
    cin >> n;

    for (int i = 0; i < alist[n].size(); i++)
    {
        cout << alist[n][i];
    }

    return 0;
}
*/

