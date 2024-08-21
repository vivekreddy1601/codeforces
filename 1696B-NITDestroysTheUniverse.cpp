//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,curr=0,cnt=0;
        cin >> n;
        while(n--){
            ll x;
            cin >> x;
            if(x)
                curr=1;
            else if(curr)
                cnt++,curr=0;
        }
        cnt+=curr;
        cnt = (cnt < 2) ? cnt : 2;
        cout << cnt << '\n';
    }
    return 0;
}
