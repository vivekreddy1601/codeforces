//code by Vivek Reddy
#include <iostream>
using namespace std;
bool ans(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]!='1'&&s[i]!='4')
            return false;
        if(s[0]=='4')
            return false;
        if(s.find("444")!=s.npos)
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if(ans(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
