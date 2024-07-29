//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll x,n,ans=1;
        cin >> x >> n;
        for(ll i = 1;i*i<=x;i++){
            if(x%i==0){
                ll left = x-(i*n);
                if(left >= 0 && left%i==0)
                    ans=max(ans,i);
                if(x/i!=i){
                    ll ii = x/i;
                    ll le = x - (ii*n);
                    if(le>=0&&le%ii==0)
                        ans = max(ans,ii);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
