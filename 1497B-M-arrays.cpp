//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,m,t=0; cin >> n >> m;
        map<ll,ll> mp;
        for(int i = 0; i< n;i++){
            int x; cin >> x;
            x = x%m;
            mp[x]++;
        }
        for(auto i : mp){
            if(i.first==0&&i.second>0) t++;
            else if(mp.count(m-i.first)==0) t+=i.second;
            else if(m-i.first==i.first)
                t++;
            else if(m-i.first>i.first){
                ll a = i.second;
                ll b = mp[m-i.first];
                if(abs(a-b)<=1) t++;
                else if(b > a){
                    b-=(a+1);
                    t++;
                    t+=b;
                }else{
                    a-=(b+1);
                    t++;
                    t+=a;
                }
            }
        }
        cout << t << '\n';
    }
    return 0;
}
