//code by Vivek Reddy
#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

int main()
{
    int vt;
    cin>> vt;
    while(vt--){
        int n;
        cin >> n;
        char a[n][n];
        for(int i =0; i< n;i++){
            for(int j = 0;j < n;j++)
                cin >> a[i][j];
        }
        int ans = 0;
        for(int i = 0; i < n;i++){
            for(int j = 0;j < n;j++){
                char p1 = a[i][j];
                char p2 = a[j][n-1-i];
                char p3 = a[n-1-i][n-1-j];
                char p4 = a[n-1-j][i];
                char maxi = max({p1,p2,p3,p4});
                ans += (maxi-p1);
                ans += (maxi-p2);
                ans += (maxi-p3);
                ans += (maxi-p4);
                a[i][j]=maxi;
                a[j][n-1-i]=maxi;
                a[n-1-i][n-1-j]=maxi;
                a[n-1-j][i]=maxi;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
