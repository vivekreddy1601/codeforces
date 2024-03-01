//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        vector<int> s;
        for(int i = 0;i*i<=(2*(n-1));i++){
            s.push_back(i*i);
        }
        int p = s.size()-1;
        set<int> se;
        int ans[n];
        for(int i = n-1;i >= 0;i--){
            int t = s[p]-i;
            while(t >= n || se.find(t)!=se.end()){
                p--;
                t = s[p]-i;
            }
            ans[t]=i;
            se.insert(t);
        }
        for(int i =0; i< n;i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}
