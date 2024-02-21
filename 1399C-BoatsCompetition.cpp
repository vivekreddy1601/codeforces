//code by Vivek reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n;i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int maxi = 0;
        for(int i = 2; i <= (2*n);i++){
            int t = 0;
            for(auto j : mp){
                int c = i-j.first;
                if(c >= 1 && mp.count(c))
                    t+=min(j.second,mp[c]);
            }
            t/=2;
            maxi = max(maxi,t);
        }
        cout << maxi << '\n';
    }
    return 0;
}
