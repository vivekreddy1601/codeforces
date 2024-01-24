//code by Vivek Reddy
#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        set<ll> s;
        for(ll i = 0;i < n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        ll l = 0, r = n-1;
        while(r-l>1){
            ll mi = *s.begin(),ma= *s.rbegin();
            if(a[l]!=mi &&a[l]!=ma&&a[r]!=mi&&a[r]!=ma)
                break;
            if(a[l]==mi||a[l]==ma){
                l++;
                s.erase(a[l-1]);
            }
            if(a[r]==mi||a[r]==ma){
                r--;
                s.erase(a[r+1]);
            }
        }
        if(r-l>1)
            cout << l+1 << ' ' << r+1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
