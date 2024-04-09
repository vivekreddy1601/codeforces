//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,n,sum=0;
        cin >> a >> b >> n;
        sum = b;
        while(n--){
            ll t;
            cin >> t;
            if(t >= a)
                sum+=(a-1);
            else
                sum+=t;
        }
        cout << sum << '\n';
    }
    return 0;
}
