//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k; string s;
    cin >>n >> k >> s;
    multiset<char> a,b;
    for(char i : s){
        a.insert(i);
    }
    for(char i : a){
        if(k) b.insert(i),k--;
        else break;
    }
    string ans = "";
    for(char i : s){
        auto x = b.find(i);
        if(x!=b.end()){
            b.erase(x);
        }else
            ans+=i;
    }
    cout << ans << endl;
    return 0;
}
