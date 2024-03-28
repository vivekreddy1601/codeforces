//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    vector<ll> a;
    cin >>n >> m;
    while(m--){
        ll x,y;
        cin >> x >> y;
        while(x--)
            a.push_back(y);
    }
    sort(a.rbegin(),a.rend());
    ll ans = 0;
    for(int i = 0; i < n && i < a.size();i++)
        ans+=a[i];
    cout << ans << endl;
    return 0;
}
