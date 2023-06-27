//code by Vivek Reddy
#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n==2){
        cout << -1 << endl;
        return;
    }
    int a[n][n];
    if(n%2==0){
        int c = 1;
        for(int i = 0; i < n;i++){
            if(i%2==0){
                for(int j = 0;j < n;j+=2){
                    a[i][j]=c++;
                }
            }else{
                for(int j = 1;j < n;j+=2)
                    a[i][j]=c++;
            }
        }
        for(int i = 0; i < n;i++){
            if(i%2==0){
                for(int j = 1; j<n;j+=2)
                    a[i][j]=c++;
            }else{
                for(int j = 0; j < n;j+=2)
                    a[i][j]=c++;
            }
        }
    }else{
        int c = 1;
        int v = 0;
        while(c<=(n*n)){
            int i = v/n;
            i%=n;
            int j = v%n;
            a[i][j]=c;
            c++;
            v+=2;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
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