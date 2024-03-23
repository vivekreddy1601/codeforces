//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,c=0;
        cin >> n;
        map<int,bool> mp;
        while(n--){
            ll x;
            cin >> x;
            while(x%2==0 && mp[x]==0){
                mp[x]=1;
                c++;
                x/=2;
            }
        }
        cout << c << '\n';
    }
    return 0;
}
