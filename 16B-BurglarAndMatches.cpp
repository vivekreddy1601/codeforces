//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.second < b.second;
}
int main()
{
    ll n,m,ans=0;
    vector<pair<ll,ll>> a;
    cin >>n >> m;
    while(m--){
        ll x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.rbegin(),a.rend(),compare);
    for(int i = 0; n > 0 && i < a.size();i++){
        if(a[i].first > n){
            ans += n*a[i].second;
            n = 0;
        }else{
            ans += a[i].first * a[i].second;
            n-= a[i].first;
        }
    }
    cout << ans << '\n';
    return 0;
}
