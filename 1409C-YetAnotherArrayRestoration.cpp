//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,x,y;
    cin >> n >> x >> y;
    if(n==2){
        cout << x << ' ' << y << '\n';
        return;
    }
    vector<ll> a(n),b(n);
    b[n-1]=1e9+5;
    for(int i = 0; i < n;i++){
        for(int j = i+1;j < n;j++){
            a[i]=x;
            a[j]=y;
            int diff = y-x,d=j-i;
            if(diff%d==0){
                diff=diff/d;
                for(int k = i-1;k >=0 ;k--){
                    a[k]=a[k+1]-diff;
                }
                for(int k = i+1;k < n;k++){
                    a[k]=a[k-1]+diff;
                }
                if(a[0]>0 && a[n-1]<b[n-1])
                    b = a;
            }
        }
    }
    for(auto i : b){
        cout << i << ' ';
    }
    cout << '\n';
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        solve();
    }
    return 0;
}
