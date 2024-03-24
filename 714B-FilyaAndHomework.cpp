//code by Vivek reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    set<ll> s;
    for(int i = 0; i < n;i++){
        ll x;
        cin >> x;
        s.insert(x);
    }
    if(s.size()>3){
        cout << "NO" << endl;
        return 0;
    }
    if(s.size()==2||s.size()==1){
        cout << "YES" <<endl;
        return 0;
    }
    vector<ll> v;
    for(auto i : s){
        v.push_back(i);
    }
    ll d1 = v[1]-v[0];
    ll d2 = v[2]-v[1];
    if(d1==d2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
