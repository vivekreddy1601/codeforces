//code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}
ll sol(ll a, ll n){
    return mod(mod(a)*mod(n));
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k,a=1;
        cin >> n>>k;
        for(int i = 0; i < k;i++)
            a = sol(a,n);
        cout << a << endl;
    }
    return 0;
}
