//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    ll p;
    for(int i = 0; i < s.size();i++){
        if(s[i]=='^'){
            p = i;
            break;
        }
    }
    ll c1 = 0, ls = 0, c2 = 0, rs = 0;
    for(int i = p-1;i>=0;i--){
        c1++;
        if(s[i]!='='){
            ls+=(s[i]-'0')*c1;
        }
    }
    for(int i = p+1;i<s.size();i++){
        c2++;
        if(s[i]!='='){
            rs+=(s[i]-'0')*c2;
        }
    }
    if(ls==rs)
        cout << "balance" << endl;
    else if(ls > rs)
        cout << "left" << endl;
    else    
        cout << "right" << endl;
    return 0;
}
