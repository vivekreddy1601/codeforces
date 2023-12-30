//code by Vivek Reddy
#include <iostream>
#define ll long long    
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        k--;
        if(n%2==0)
            cout << (k%n)+1 << endl;
        else{
            ll ans = ((k/(n/2))+k)%n ;
            cout << ans+1 << endl;
        }
    }
    return 0;
}
