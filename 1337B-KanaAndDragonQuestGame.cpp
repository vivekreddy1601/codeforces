//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll x,n,m;
        cin >> x >> n >> m;
        m*=10;
        if(m >= x){
            cout << "YES" << endl;
            continue;
        }
        while(n--){
            x/=2;
            x+=10;
            //cout << x << endl;
        }
        if(m >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
