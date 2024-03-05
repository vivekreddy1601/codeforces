//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,q,s=0,u=-1;
    cin >> n >> q;
    ll ar[n+4];
    for(int i = 1;i <= n;i++){
        cin >> ar[i];
        s+=ar[i];
    }
    map<ll,ll> mp1;
    while(q--){
        ll a;
        cin >> a;
        if(a==1){
            ll i,x;
            cin >> i >> x;
            if(u==-1){
                if(x >= ar[i])
                    s += x-ar[i];
                else
                    s -= ar[i]-x;
                ar[i]=x;
                cout << s << '\n';
            }else{
                ll z;
                if(mp1[i]==0)z=u;
                else z=mp1[i];
                if(x>=z)s+=x-z;
                else s -= z-x;
                cout << s << '\n';
                mp1[i]=x;
            }
        }else{
            ll x;
            cin >> x;
            s = x*n;
            cout << s << '\n';
            mp1.clear();
            u = x;
        }
    }
    return 0;
}
