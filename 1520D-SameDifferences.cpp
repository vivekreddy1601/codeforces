//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,c=0;
        cin >> n;
        map<ll,ll> mp;
        for(int i = 0; i < n;i++){
            int x;
            cin >> x;
            mp[x-i]++;
        }
        for(auto i : mp){
            c += (i.second)*(i.second-1)/2;
        }
        cout << c << endl;
    }
    return 0;
}
