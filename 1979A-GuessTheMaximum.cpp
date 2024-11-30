//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        ll ans = INT_MAX;
        for(int i = 1;i < n;i++){
            ll t = max(a[i-1],a[i]);
            ans = min(t,ans);
        }
        cout << ans-1 << '\n';
    }
    return 0;
}
