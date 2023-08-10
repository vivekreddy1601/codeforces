//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++ ){
            cin >> a[i];
        }
        bool palin = true;
        for(int i = 0; i < (n+1)/2;i++){
            if(a[i]!=a[n-i-1])
                palin = false;
        }
        if(palin == true)
            cout << "0" << endl;
        else{
            ll gap=(abs(a[0]-a[n-1]));
            for(int i = 0; i < (n+1)/2;i++){
                gap = __gcd(gap,abs(a[i]-a[n-i-1]));
            }
            cout << gap << endl;
        }
    }
    return 0;
}
