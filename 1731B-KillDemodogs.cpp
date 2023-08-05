//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    const ll mod = 1e9 + 7;
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        /*
            2022*((n)*(n+1)*(4*n-1))/6
        */
        ll x = 337;
        x *= n;
        x %= mod;
        x *= (n+1);
        x %= mod;
        x *= ((4*n)-1);
        x %= mod;
        cout << x << endl;
    }
    return 0;
}