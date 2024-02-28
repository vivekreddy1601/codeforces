//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int c[105]={0};
    for(int i = 0; i < n;i++){
        int x;cin >> x;
        if(c[x]==0){
            c[x]=1;
            v.push_back(x);
        }
    }
    if(v.size()>3){
        cout << -1 << '\n';
        return 0;
    }
    if(v.size()==1)
        return cout << 0 << '\n' , 0;
    sort(v.begin(),v.end());
    if(v.size()==2){
        int d = abs(v[1]-v[0]);
        if(d&1)
            cout << d << '\n';
        else
            cout << d/2 << '\n';
        return 0;
    }
    int d = v[2]-v[0];
    if(d%2==0 && (d/2+v[1])==v[2])
        cout << d/2 << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
