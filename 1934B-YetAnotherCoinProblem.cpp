//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        map<ll,ll>v;
        v[0]=0;
        v[1]=1;
        v[2]=2;
        v[3]=1;
        v[4]=2;
        v[5]=3;
        v[6]=1;
        v[7]=2;
        v[8]=3;
        v[9]=2;
        v[10]=1;
        v[11]=2;
        v[12]=2;
        v[13]=2;
        v[14]=3;
        ll fif=n/15;
        n%=15;
        if(fif==0){
            cout<<v[n]<<"\n";
        }
        else{
            ll ans=(fif+v[n]);
            if(n>=5)
                ans=min((fif+v[n]),(fif+1+v[n-5]));
            cout<<ans<<"\n";
        }
    }
    return 0;
}
