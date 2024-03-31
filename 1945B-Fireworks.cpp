//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,m;
        cin >>a >> b >> m;
        m++;
        ll ans = ceil((double(m))/double(a)) + ceil((double(m))/double(b));
        cout << ans << '\n';
    }
    return 0;
}
