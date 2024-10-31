//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,n;
        cin >> a >> b >> n;
        ll sum = min(a,b),m = max(a,b),tot=0;
        while(sum <= n){
            ll t = sum;
            sum+=m;
            m = max(m,t);
            tot++;
        }
        cout << tot << '\n';
    }
    return 0;
}
