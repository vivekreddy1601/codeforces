//code by Vivek Reddy
#define ll long long
#include <iostream>
using namespace std;
int main()
{
    ll n,l,m;
    cin >> n >> l >> m;
    ll mini,maxi;
    if(l == 1){
        mini = n;
    }else{
        mini = 0;
        ll t = 1,len=n-l;
        while(l > 0){
            mini += t;
            t*=2;
            l--;
        }
        mini += len;
    }
    if(m == 1){
        maxi = n;
    }else{
        maxi = 1;
        m--;
        ll t = 2,len = n-m-1;
        while(m > 0){
            maxi += t;
            t*=2;
            m--;
        }
        maxi += (t/2)*len;
    }
    cout << mini << ' ' << maxi << endl;
    return 0;
}
