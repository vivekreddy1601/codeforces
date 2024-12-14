//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        ll dist = b - a;
        ll left=1, right=dist+7, res=1;
        while(left <= right){
            ll mid = (left + right) / 2;
            ll tst = mid * (mid - 1) / 2;
            if(tst <= dist){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }
        cout << res << '\n';
    }
    return 0;
}
