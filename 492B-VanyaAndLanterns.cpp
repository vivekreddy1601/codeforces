//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,l;
    cin >> n >> l;
    ll a[n];
    for(int i = 0; i< n;i++)
        cin >> a[i];
    sort(a,a+n);
    double ans = 0.0;
    ans = a[0]-0;
    for(int i = 0;i < n-1;i++){
            double t = a[i+1]-a[i];
            t/=double(2);
            ans = max(ans,t);
    }
    if(a[n-1]!=l){
        double t = l-a[n-1];
        ans = max(ans,t);
    }
    cout <<fixed<<setprecision(10) << ans << endl;
    return 0;
}
