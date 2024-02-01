//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;
void vivek(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int o = 0,z=0;
    vector<pair<int,int>> v;
    for(int i = 0,j=0; i < n;i++){
        if(a[i]=='1')o++;
        else z++;
        if(o==z){
            v.push_back({j,i});
            j=i+1;
        }
    }
    for(auto i : v){
        int s = i.first;
        int e = i.second;
        if(a[s]==b[s]) continue;
        else{
            for(int j = s;j<=e;j++){
                if(a[j]=='0') a[j]='1';
                else a[j] = '0';
            }
        }
    }
    for(int i = 0; i < n;i++){
        if(a[i]!=b[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        vivek();
    }
    return 0;
}
