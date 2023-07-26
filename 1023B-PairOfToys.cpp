//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin >> n >> k;
    if(k <= n){
        cout << (k-1)/2 << endl;
    }else{
        ll t = (n-(k-n-1))/2;
        cout << (t<0?0:t) << endl;
    }
    return 0;
}
