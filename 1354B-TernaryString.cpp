//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        string s;
        cin >> s;
        vector<pair<char,int>> vp;
        int k = -1,ans=INT_MAX;
        for(int i = 0;i< s.size();i++){
            if(k==-1||vp[k].first!=s[i]){
                vp.push_back({s[i],1});
                k++;
            }else{
                vp[k].second++;
            }
        }
        for(int i = 1;i < k;i++){
            if(vp[i-1].first!=vp[i+1].first){
                ans = min(ans,vp[i].second+2);
            }
        }
        if(ans==INT_MAX)        
            cout << 0 << '\n';
        else    
            cout << ans << '\n';
    }
    return 0;
}
