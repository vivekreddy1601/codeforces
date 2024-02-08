//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,r;
        cin >> n>>r;
        if(n > r){
            ll a = (r*(r+1))/2;
            cout << a << '\n';
        }else{
            n--;
            ll a = (n*(n+1))/2;
            a++;
            cout << a << '\n';
        }
    }
    return 0;
}
