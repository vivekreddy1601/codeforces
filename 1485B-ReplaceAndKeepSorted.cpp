//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,q,k;
    cin >> n>> q >> k;
    ll a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << k + (a[r-1]-a[l-1]+1)- 2*(r-l+1)<< '\n';
    }
    return 0;
}
