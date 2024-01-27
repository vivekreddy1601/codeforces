//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll s = a+b+c;
        s/=3;
        cout << min(min(a,b),s) << '\n';
    }
    return 0;
}
