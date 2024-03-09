//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,ans=-1e18; cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        for(int i = 0; i< 5;i++){
            int aa,bb,cc,dd,ee;
            ee = (n-1+i)%n;
            dd = (n-2+i)%n;
            cc = (n-3+i)%n;
            bb = (n-4+i)%n;
            aa = (n-5+i)%n;
            ll val = a[aa]*a[bb]*a[cc]*a[dd]*a[ee];
            ans = max(ans,val);
        }
        cout << ans << '\n';
    }
    return 0;
}
