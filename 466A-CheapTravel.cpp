//code by Vivek Reddy
#include <iostream>
#define ll long long
#define dob double
using namespace std;

int main()
{
    ll n,m,ans;
    dob a,b;
    cin >> n >> m >> a  >> b;
    dob x = b/m;
    if(x < a){
        ll t = n/m;
        n = n%m;
        if((n*a)<b)
            ans=((t*b)+(n*a));
        else
            ans=((t*b)+b);
    }else
        ans=(n*a);
    cout << ans << endl;
    return 0;
}