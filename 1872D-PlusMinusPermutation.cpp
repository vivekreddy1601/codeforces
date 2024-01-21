//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll n1){
    return (n1*(n1+1))/2;
}
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,x,y;
        cin >> n >> x >> y;
        ll a = n/x;
        ll b = n/y;
        ll lcm = (x*y)/__gcd(x,y);
        ll c = n/lcm;
        ll a1 = a-c;
        ll b1 = b-c;
        cout << (sum(n)-sum(n-a1))-sum(b1) << endl;
    }
    return 0;
}
