//code by Vivek Reddy
#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>&v,int n){
    for(int i = 0; i < n/2;i++){
        for(int j = i;j < n-i-1;j++){
            int t = v[i][j];
            v[i][j]=v[n-1-j][i];
            v[n-1-j][i]=v[n-1-i][n-1-j];
            v[n-1-i][n-1-j]=v[j][n-1-i];
            v[j][n-1-i]=t;
        }
    }
}
long long solve(){
    int n;
    cin >> n;
    int ans = 0;
    vector<vector<int>> v(n,vector<int>(n,0)),v1(n,vector<int>(n,0)), v2(n,vector<int>(n,0)), v3(n,vector<int>(n,0));
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            char t;
            cin >> t;
            v[i][j]=t-'0';
        }
    }
    v1 = v;
    rotate(v1,n);
    v2 = v1;
    rotate(v2,n);
    v3 = v2;
    rotate(v3,n);
    
    for(int i = 0; i < (n+1)/2;i++){
        for(int j = 0;j < n/2;j++){
            int o = 0, z = 0;
            if(v[i][j]==1)
                o++;
            else
                z++;
            if(v1[i][j]==1)
                o++;
            else
                z++;
            if(v2[i][j]==1)
                o++;
            else
                z++;
            if(v3[i][j]==1)
                o++;
            else
                z++;
            ans+=min(o,z);
        }
    }
    cout << ans << endl;
    return 0;
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
