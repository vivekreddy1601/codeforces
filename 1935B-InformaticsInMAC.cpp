//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];
    unordered_map<ll,ll> mp;
    for(int i = 0; i < n;i++)
        mp[v[i]]=1;
    ll mex = 0;
    for(int i = 0; i < 1e5+5;i++){
        if(mp[i]==0){
            mex = i;
            break;
        }
    }
    if(mex == 0){
        cout << "2\n";
        cout << "1 1\n";
        cout << "2 " << n << '\n';
        return;
    }
    mp.clear();
    ll left = 0;
    vector<pair<ll,ll>> ans;
    for(int i = 0; i< n;i++){
        if(v[i]<mex)
            mp[v[i]]=1;
        if(mp.size()==mex){
            ans.push_back({left+1,i+1});
            left = i+1;
            mp.clear();
        }
    }
    ans[ans.size()-1].second = n;
    if(ans.size()<2)
        cout << -1 << '\n';
    else{
        cout << ans.size() << '\n';
        for(int i = 0; i < ans.size();i++)
            cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
}
int main()
{
    int vt; 
    cin >> vt;
    while(vt--){
        solve();
    }
    return 0;
}
