//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll dif = c-d;
        if(b >= a){
            cout << b << endl;
        }
        else if(dif <= 0)
            cout << -1 << endl;
        else{
            a-=b;
            ll x = ceil(double(a)/dif);
            cout << b+(x*c) << endl;
        }
    }
    return 0;
}