//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0;i < n;i++)    
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0;i < n;i+=2)
        cout << a[i] << ' ';
    for(int i = n-1;i >=0;i--)
        if(i&1) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
