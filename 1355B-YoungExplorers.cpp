//code by Vivek reddy
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
        map<int,int> mp;
        for(int i = 0; i < n;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int t = 0,l=0;
        for(auto i : mp){
            i.second += l;
            t += (i.second/i.first);
            l = i.second%i.first;
        }
        cout << t<< endl;
    }
    return 0;
}
