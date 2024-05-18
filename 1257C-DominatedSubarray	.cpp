//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt = 0;
    cin >> vt;
    while(vt--){
        ll n,m,ans = LONG_MAX;
        bool c = false;
        cin >> n;
        ll p[200005]={0};
        for(int i = 1;i <= n;i++){
            cin >> m;
            if(p[m]!=0){
                ans = min(ans,abs(i-p[m]));
                c = true;
            }
            p[m]=i;
        }    
        if(c == true)
            cout << ans+1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
