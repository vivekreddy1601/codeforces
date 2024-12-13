//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s,m,c=0,tt=0;
        cin >> n >> s >> m;
        while(n--){
            ll x,y;
            cin >> x >> y;
                if(x-tt >= s){
                    c = 1;
                }
            if(n == 0){
                if(m-y>=s)
                    c=1;
            }
            tt = y;
        }
        if(c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
