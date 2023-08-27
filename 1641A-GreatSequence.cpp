//code by Vivek Reddy   
#include <iostream> 
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,x,ans=0;
        cin >> n>> x;
        ll a[n];
        for(ll i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        map<ll,ll> vp;
        for(int i = 0; i < n;i++)
            vp[a[i]]++;
        for(ll i = 0; i < n;i++){
            if(vp.count(a[i])==0)
                continue;
            ll t = a[i]*x;
            if(vp.count(t))
                vp[t]--;
            else
                ans++;
            vp[a[i]]--;
            if(vp[t]==0)
                vp.erase(t);
            if(vp[a[i]]==0)
                vp.erase(a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}