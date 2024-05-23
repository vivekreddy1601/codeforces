//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(i)
                a[i]=a[i]+a[i-1];
        }
        for(int i = 0; i < q;i++){
            ll l,r,k;
            cin >> l >> r >> k;
            ll now;
            if(l>1)
                now = a[r-1]-a[l-2];
            else
                now = a[r-1];
            if((a[n - 1] - now + (r - l + 1) * k) % 2) cout << "YES" << '\n';
			else cout << "NO" << '\n';
        }
    }
    return 0;
}
