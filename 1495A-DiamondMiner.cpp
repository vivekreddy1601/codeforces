//code by Vivek Reddy
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#include <vector>
#define ll long long 
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        vector<ll> a,b;
        for(int i = 0; i < 2*n;i++){
            ll x,y;
            cin >> x >> y;
            if(x == 0)
                b.push_back(abs(y));
            else
                a.push_back(abs(x));
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        double ans = 0;
        for(int i = 0; i < n;i++){
            ll t = (a[i]*a[i]) + (b[i]*b[i]);
            ans += (double)sqrt(t);
        }
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}
