//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll m,k,a,b;
        cin >> m >> k >> a >> b;
        ll temp = (m/k)*k;
        temp = min(temp,b*k);
        temp = m-temp;
        m = max(0ll,temp-a);
        ll ans = ((m/k)+(m%k));
        if(a >=  (k - m%k)){
            ll ans2 = 1 + (m/k);
            ans = min(ans,ans2);
        }
        cout << ans << '\n';
    }
    return 0;
}
