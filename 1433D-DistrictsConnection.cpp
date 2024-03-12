//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<int,vector<int>> a;
    set<int> s;
    for(int i= 0; i< n;i++){
        int x;
        cin >> x;
        s.insert(x);
        a[x].push_back(i);
    }
    if((int)s.size()==1){
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    vector<vector<int>>other;
    for(auto i : a)
        other.push_back(i.second);
    for(int i = 1;i < (int)other.size();i++){
        for(auto j : other[i])
            cout << other[0][0]+1 << ' ' << j+1 << '\n';
    }
    for(int i = 1;i < (int)other[0].size();i++)
        cout << other[0][i]+1 << ' ' << other[1][0]+1 << '\n';
    return ;
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
