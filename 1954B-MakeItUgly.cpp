//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(ll a[],ll n){
    if(n==1)
        return -1;
    unordered_map<int,int> mp;
    for(int i = 0;i <n;i++){
        mp[a[i]]++;
    }
    if(mp.size()==1)
        return -1;
    ll j = 0;
    ll ans = n;
    for(int i = 0;i < n;i++){
        if(a[i]==a[0])
            j++;
        else{
            ans = min(ans,j);
            j = 0;
        }
    }
    ans = min(ans,j);
    return ans;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        ll r = solve(a,n);
        cout << r << '\n';
    }
    return 0;
}
