//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll t1 = a*d;
        ll t2 = b*c;
        if(t1==t2)
            cout << 0 << endl;
        else if(t1==0||t2==0||(t1%t2==0)||(t2%t1==0))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
