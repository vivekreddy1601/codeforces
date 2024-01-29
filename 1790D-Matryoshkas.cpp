//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        vector<pair<ll,ll>> b;
        sort(a,a+n);
        reverse(a,a+n);
        for(int i = 0; i < n;){
            int j = i;
            while(i < n && a[i] == a[j])
                i++;
            b.push_back({a[j],i-j});
        }
        ll m = b.size();
        ll ans = b[0].second;
        for(int i= 1;i < m;i++){
            if(b[i].first+1 == b[i-1].first)
                ans+=max(b[i].second-b[i-1].second,0ll);
            else
                ans += b[i].second;
        }
        cout << ans << endl;
    }
    return 0;
}
