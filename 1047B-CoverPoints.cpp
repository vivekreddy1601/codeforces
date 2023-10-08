//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt,ans=0;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        ans = max(ans,a+b);
    }
    cout << ans << endl;
    return 0;
}