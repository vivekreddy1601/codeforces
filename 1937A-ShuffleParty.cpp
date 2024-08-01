//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,x=1;
        cin >> n;
        while(2*x<=n)
            x*=2;
        cout << x << '\n';
    }
    return 0;
}
