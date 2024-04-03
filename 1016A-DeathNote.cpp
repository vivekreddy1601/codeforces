//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,m,x,t=0;
    cin >> n >> m;
    while(n--){
        cin >> x;
        t+=x;
        cout << t/m << ' ';
        t -= ((t/m)*m);
    }
    cout << '\n';
    return 0;
}
