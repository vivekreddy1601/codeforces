//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        ll ans = 2*(a[2]-a[0]-2);
        cout << max(0,ans) << '\n';
    }
    return 0;
}
