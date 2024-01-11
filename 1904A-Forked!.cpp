//code by Vivek Reddy
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    while(n--){
        ll a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        set<pair<int,int> > s;
        s.insert({a,b});
        s.insert({a,-b});
        s.insert({-a,b});
        s.insert({-a,-b});
        swap(a,b);
        s.insert({a,b});
        s.insert({a,-b});
        s.insert({-a,b});
        s.insert({-a,-b});
        
        map<pair<int,int>,int> mp1,mp2;
        for(auto [i,j]:s){
            mp1[{i+c,d+j}]=1;
            mp2[{i+e,f+j}]=1;
        }
        int k = 0;
        for(auto [p,w]:mp1){
            if(mp2.count(p))
                k++;
        }
        cout << k << endl;
    }
    return 0;
}
