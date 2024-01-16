//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,q;
        cin >> n >> q;
        ll a[n],b[q];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        for(int i = 0; i < q;i++)
            cin >> b[i];
        vector<ll> presum(n),premax(n);
        presum[0]=a[0];
        premax[0]=a[0];
        for(int i = 1; i < n;i++){
            presum[i]=presum[i-1]+a[i];
            premax[i]=max(premax[i-1],a[i]);
        }
        for(int i = 0; i < q;i++){
            int x = upper_bound(premax.begin(),premax.end(),b[i])-premax.begin();
            if(x==0)cout << 0 << ' ';
            else cout << presum[x-1] << ' ';
        }
        cout << endl;
    }
    return 0;
}
