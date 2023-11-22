//code by Vivek Reddy
#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    ll n,k,m=INT_MIN;
    cin >> n>> k;
    while(n--){
        ll a,b;
        cin >> a >> b;
        if(b <= k){
            if(a > m)
                m = a;
        }else{
            ll t = a-(b-k);
            if(t > m)
                m = t;
        }
    }
    cout << m << endl;
    return 0;
}
