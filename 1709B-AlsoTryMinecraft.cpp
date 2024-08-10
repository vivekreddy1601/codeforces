//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin >> n >> m;
    ll a[n],pre[n+1]={0},suff[n+1]={0};
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 1;i < n;i++)
        pre[i+1] = pre[i] + (a[i-1] > a[i] ? a[i-1]-a[i] : 0);
    for(int i = n-2;i >= 0;i--){
        suff[i+1] = suff[i+2] + (a[i+1] > a[i] ? a[i+1]-a[i] : 0);
    }
    while(m--){
        ll x,y,ans=0;
        cin >> x >> y;
        if(x < y){
            cout << pre[y]-pre[x] << '\n';
        }else
            cout << suff[y]-suff[x] << '\n';
    }
    return 0;
}
