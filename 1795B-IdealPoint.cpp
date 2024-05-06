//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> v(n);
        map<int,int> mp;
        int c = 0;
        for(int i = 0; i < n;i++){
            cin >> v[i].first>> v[i].second;
            for(int j = v[i].first;j <= v[i].second;j++)
                mp[j]++;
        }
        bool flag = true;
        for(int i = 1;i <= 50;i++){
            if(i!=k&&mp[i]>=mp[k]){
                flag = false;
                int count = 0;
                for(auto x : v){
                    if(x.second>=i && x.first<=i && (x.second<k || x.first>k)){
                        count++;
                    }
                }
                if(count<(mp[i]-mp[k]+1)){
                    flag=false;
                    break;
                }else
                    flag = true;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
