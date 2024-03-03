//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,ans=0;
        cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n;i++)
            cin >> v[i];
        map<char,int> st,en;
        map<string,int> s;
        for(int i = 0; i < n;i++){
            ans+=(st[v[i][0]]+en[v[i][1]]-(2*s[v[i]]));
            st[v[i][0]]++;
            en[v[i][1]]++;
            s[v[i]]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
