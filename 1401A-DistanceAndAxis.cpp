//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
ll max(ll x,ll y){
    if(x > y)
        return x;
    else
        return y;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        ll tot = 0;
        tot+=max(0,k-n);
        n+=tot;
        if(k&1 && n%2==0)
            tot++;
        else if(k%2==0&&n&1)
            tot++;
        cout << tot << endl;
    }
    return 0;
}