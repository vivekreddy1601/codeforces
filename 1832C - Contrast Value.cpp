//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,s=0;
        cin >> n;
        vector<int> a(n);
        for(auto &x:a)
            cin >> x;
        a.resize(unique(a.begin(),a.end())-a.begin());
        n = a.size();
        for(ll i = 0;i < n;i++){
            if(i == 0 || i == n-1 || (a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1]))
                s++;
        }
        cout << s << endl;
    }
    return 0;
}
