//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,b,h;
        long double ans = 0;
        cin >> n >> b >> h;
        vector<ll> a(n);
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        for(int i =0; i <n-1;i++){
            ll d = a[i+1]-a[i];
            long double t = 0;
            if(d < h){
                t = ((h-d)*1.0)*((h-d)*1.0)*(b*1.0)/(2*h*1.0);
            }
            ans += (b*h*1.0)/(2.0);
            ans-=t;
        }
        ans += (b*h*1.0)/2.0;
        cout << setprecision(13) << ans << '\n';
    }
    return 0;
}
