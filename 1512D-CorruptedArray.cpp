//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void ans(){
  ll n,s=0,ind=-1;
        cin >> n;
        ll a[n+2];
        for(int i = 0; i < n+2;i++)
            cin >> a[i];
        sort(a,a+n+2);
        vector<ll> b;
        for(int i = 0; i < n+1;i++){
            s+=a[i];
        }
        for(int i = 0; i<n+1;i++){
            if(s-a[i]==a[n+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            s-=a[n];
            if(s==a[n])
                ind = n;
            else{
                cout << -1 << '\n';
                return;
            }
        }
            for(int i = 0; i < n+1;i++){
                if(i!=ind)
                    b.push_back(a[i]);
            }
            for(auto i : b)
                cout << i << ' ';
            cout << '\n';
        return ;
}
int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ans();
    }
    return 0;
}
