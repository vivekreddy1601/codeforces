#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,vector<int>> mp;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    if(n==1){
        cout << 0 << endl;
        return ;
    }
    int len = 2e5+2;
    for(auto i : mp){
        int ok = 0;
        if((int)i.second.size()==1){
            if(i.second[0]==0||i.second[0]==n-1)
                len = min(len,1);
            else
                len = min(len,2);
            continue;
        }
        for(int j = 0; j < (int)i.second.size();j++){
            if(j == 0){
                if(i.second[j]>=1)
                    ok++;
                continue;
            }
            if(j==(int)i.second.size()-1){
                if(i.second[j]<n-1)
                    ok++;
            }
            if(i.second[j]-i.second[j-1]>1)
                ok++;
        }
        len = min(len,ok);
    }
    cout << len << endl;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        solve();
    }
    return 0;
}
