//Code by Vivek Reddy
#include <iostream>
#include <vector>
#include <utility>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,x;
        cin >> n >> x;
        ll a[n];
        vector<pair<ll,ll>> v(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
            v[i].first=a[i]-x;
            if(v[i].first<0)
                v[i].first=0;
            v[i].second=a[i]+x;
        }
        ll c=0,l=v[0].first,r=v[0].second;
        for(int i = 1; i < n;i++){
            if(v[i].first>r||v[i].second<l)
                c++,r=v[i].second,l=v[i].first;
            l=max(l,v[i].first);
            r=min(r,v[i].second);
        }
        cout << c << endl;
    }
    return 0;
}