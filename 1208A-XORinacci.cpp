//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,n;
        cin >> a >> b >> n;
        ll c = a^b;
        if(n%3==0)  
            cout << a << '\n';
        else if(n%3==1)
            cout << b << '\n';
        else
            cout << c << '\n';
    }
    return 0;
}
