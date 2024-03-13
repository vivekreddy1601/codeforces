//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin >>n >> m;
    vector<ll> v;
    map<int,bool> mp;
    for(int i = 0; i < n;i++){
        ll x;
        cin >> x;
        mp[x]=1;
    }
    for(int i = 1;m > 0;i++){
        if(mp[i]==0){
            if(m>=i){
                m-=i;
                v.push_back(i);
            }else
                break;
        }
    }
    cout << v.size() << '\n';
    for(int i = 0; i< v.size();i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
}
