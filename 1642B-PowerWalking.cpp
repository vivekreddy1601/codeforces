//code by Vivek Reddy
#include <iostream>
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n;i++){
            ll x;
            cin >> x;
            mp[x]++;
        }
        vector<int> ans;
        for(int i = 1;i <= n;i++){
            if(i<=mp.size()){
                ans.push_back(mp.size());
            }
            else{
                int t = ans[ans.size()-1];
                ans.push_back(t+1);
            }
        }
        for(auto i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
