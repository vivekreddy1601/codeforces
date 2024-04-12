//code by Vivek Reddy
#include <iostream>
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n;
        cin >> n;
        if(n==2){
            cout << "1 1\n1 1\n";
            continue;
        }
        int a = 0,b=1;
        int ans[n][n];
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n;j++)
                ans[i][j]=0;
        }
        for(int i = 0; i < n-1;i++){
            ans[i][a]=1;
            ans[i][b]=1;
            a++;
            b++;
        }
        ans[n-1][n-1]=1;
        ans[n-1][0]=1;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n;j++)
                cout << ans[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
