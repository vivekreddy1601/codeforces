//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,m;
        cin >> n >> m;
        ll a[m];
        for(int i = 0; i < m;i++)
            cin >> a[i];
        sort(a,a+m);
        vector<ll> diff;
        for(int i = 0; i < m-1;i++){
            diff.push_back(a[i+1]-a[i]-1);
        }
        diff.push_back(a[0]+n-a[m-1]-1);
        int t = 0,s = 0;
        sort(diff.rbegin(),diff.rend());
        for(int i = 0; i < diff.size();i++){
            int c = diff[i];
            c -= (t*2);
            if(c <= 0)
                break;
            s+=(c-1);
            if(c==1)
                s++;
            t+=2;
        }
        cout << n-s << endl;
    }
    return 0;
}
