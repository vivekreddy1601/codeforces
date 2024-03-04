//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,ans=0,sum=0;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    if(n==1)
        cout << a[0] << endl;
    else{
        sort(a,a+n);
        ans = sum;
        for(int i = 0; i < n-1;i++){
            sum-=a[i];
            ans+=sum;
            ans+=a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
