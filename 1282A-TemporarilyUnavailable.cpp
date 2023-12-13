 //code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,c,r,x,mi,ma;
        cin >> a >> b >> c >> r;
        x = a;
        a = min(a,b);
        b = max(x,b);
        mi = c-r;
        ma = c+r;
        if(ma < a || mi > b)
            cout << (b-a) << endl;
        else if(mi >= a && ma <= b)
            cout << (b-a-(ma-mi)) << endl;
        else if(mi <= a && ma >= b)
            cout << 0 << endl;
        else if(mi >= a && ma >= b)
            cout << mi-a << endl;
        else if(mi <= a && ma <= b)
            cout << b-ma << endl;
    }
    return 0;
}
