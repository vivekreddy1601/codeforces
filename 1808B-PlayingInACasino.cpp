//code by Vivek Reddy inspired by Prabhat Singh
#include <iostream>
#include <vector>
#include <algorithm>
#define int long long int
using namespace std;

signed main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m;
        cin >> n >> m;
        vector<int> v[m];
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                int x;
                cin >> x;
                v[j].push_back(x);
            }
        }
        for(int i = 0; i < m;i++){
            sort(v[i].begin(),v[i].end());
        }
        int ans = 0;
        for(int i = 0; i < m;i++){
            vector<int> res(n,0);
            res[n-1]=v[i][n-1];
            for(int j = n-2;j>=0;j--){
                res[j]=res[j+1]+v[i][j];
            }
            for(int j = 0; j < n-1;j++){
                int c = res[j+1]-((n-1-j)*v[i][j]);
                ans+=c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}