//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,s=0;
        cin >> n;
        for(int i = 0; i < n;i++){
            ll x;
            cin >> x;
            s+=x;
        }
        ll a = s%n;
        ll b = n - a;
        cout << a*b << '\n';
    }
    return 0;
}
