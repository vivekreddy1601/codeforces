//code by Vivek reddy
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long
#define cin std::cin
#define cout std::cout
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n+1];
        for(int i = 0; i < n;i++) 
            cin >> a[i];
        std::sort(a,a+n);
        ll ans[n+1]={0};
        if(n%2==0){
            ll k = n-1;
            for(ll i = 0;i < n/2;i++){
                ans[k--]=a[n-1-i];
                ans[k--]=a[i];
            }
        }else{
            ll k = n-1;
            ans[0]=a[n/2];
            for(ll i = 0;i < n/2;i++){
                ans[k--]=a[n-1-i];
                ans[k--]=a[i];
            }
        }
        for(int i = 0; i < n;i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
