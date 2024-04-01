//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,ans=0;
        cin >> n;
        set<ll> s;
        for(int i = 0; i < n;i++){
            ll x;
            cin >> x;
            s.insert(x);
        }
        vector<ll> v;
        for(auto i : s){
            v.push_back(i);
        }
        for(int i = 0; i < v.size();i++){
            ll x = v[i];
            auto it = lower_bound(v.begin(),v.end(),x+n);
            ll d = it-v.begin()-i;
            ans = max(ans,d);
        }
        cout << ans << '\n';
    }
    return 0;
}
