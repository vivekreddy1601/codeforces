//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == 0)
            cout << 1 << endl;
        else{
            ll t = a+(2*min(b,c));
            t+=min(abs(b-c)+d,a+1);
            cout << t << endl;
        }
    }
    return 0;
}