//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    bool win = false;
    for(auto i : s){
        if(!st.empty() && i == st.top()){
            st.pop();
            win = !win;
        }else{
            st.push(i);
        }
    }
    cout << (win ? "Yes" : "No") << '\n';
    return 0;
}
