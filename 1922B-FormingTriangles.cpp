//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        map<ll,ll> mp;
        for(int i = 0; i < n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        ll c = 0,ans = 0;
        for(auto i : mp){
            if(i.second >= 3)
                ans += (((i.second)*(i.second-1)*(i.second-2))/6);
            if(i.second >= 2){
                ll z1 = (((i.second)*(i.second-1))/2);
                ll z2 = c;
                ans+=(z1*z2);
            }
            c += i.second;
        }
        cout << ans << '\n';
    }
    return 0;
}
