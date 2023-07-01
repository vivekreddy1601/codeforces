//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll t = a+b+c;
        ll ans = floor(double(t)/2);
        cout << ans << endl;
    }
    return 0;
}
