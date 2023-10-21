//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
ll bigp(ll x,ll e){
    ll res;
    if(e==0)
        res = 1;
    else if(e==1)
        res = x;
    else{
        res = bigp(x,e/2);
        res = res * res;
        if(e%2)
            res = res*x;
    }
    return res;
}
int main()
{
    ll b,k;
    cin >> b >> k;
    ll a[k];
    for(int i = 0; i < k;i++)
        cin >> a[i];
    ll x = k-1,ans;
    for(int i = 0; i < k;i++){
        ans+=a[i]*bigp(b,x);
        if(x==0)
            x = 0;
        else
            x--;
    }
    if(ans&1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}
