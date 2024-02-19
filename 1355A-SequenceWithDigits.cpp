//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
ll fun(ll n){
    ll r1=-1,r2=10;
    while(n>0){
        ll t = n%10;
        r1=max(r1,t);
        r2=min(r2,t);
        n/=10;
    }
    return r1*r2;
}
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,k;
        cin >> a >> k;
        while(--k){
            ll t = a+fun(a);
            if(t==a) break;
            a = t;
        }
        cout << a << '\n';
    }
    return 0;
}
