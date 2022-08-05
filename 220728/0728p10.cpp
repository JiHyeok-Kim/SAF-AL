/*
저장: 저장

스택에 저장된 값을 읽을 때,
-반드시 위에 있는것만 읽어야함

스택에 값을 지울때
- 반드시 위에있는것만 지워야함
*/
/*
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(2);
    st.push(3);
    st.push(6);

    cout << st.top(); //6
    st.pop(); //삭제 맨위 삭제
    cout << st.top(); //3


    return 0;
}

*/
#include <iostream>
//#include <stack>
#include <queue>
using namespace std;

int main() {
    //stack<int> st;
    queue<int> st;

    st.push(2);
    st.push(3);
    st.push(6);

    cout << st.front();
    st.pop();
    cout << st.front();

    cout << st.size();

    return 0;
}