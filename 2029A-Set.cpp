//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll l,r,k;
        cin >> l >> r >> k;
        ll ans = (r/k)-l+1;
        if(ans<0)
            cout<< 0 <<'\n';
        else
            cout << ans << '\n';
    }
    return 0;
}
