//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll x,s=0;
        cin >> x;
        s = x;
        while(x){
            ll t = x/10;
            s+=t;
            if(t == 0) 
                break;
            x%=10;
            x+=t;
        }
        cout << s << endl;
    }
    return 0;
}