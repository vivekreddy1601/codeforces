//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        set<ll> s;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        ll i = 0,sum=0;
        while(i<n){
            if(a[i]<0){
                while(a[i]<0&&i<n){
                    s.insert(a[i]);
                    i++;
                }
            }else{
                while(a[i]>0&&i<n){
                    s.insert(a[i]);
                    i++;
                }
            }
            auto t = s.rbegin();
            sum+= *t;
            s.clear();
        }
        cout << sum << endl;
    }
    return 0;
}
