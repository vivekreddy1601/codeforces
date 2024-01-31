//code by Vivek reddy
#include <iostream>
using namespace std;
void swap(char &a,char &b){
    char c = a;
    a = b;
    b = c;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        int n,m;
        cin >> n>>m;
        char a[n][m];
        for(int i = 0; i < n;i++){
            for(int j = 0;j < m;j++)
                cin >> a[i][j];
        }
        for(int j = 0;j < m;j++){
            for(int i = n-2;i>=0;i--){
                if(a[i][j]=='*'){
                    int k = i+1;
                    while(k < n && a[k][j]=='.')
                        k++;
                    swap(a[i][j],a[k-1][j]);
                }
            }
        }
        for(int i = 0; i < n;i++){
            for(int j = 0;j < m;j++)
                cout << a[i][j];
            cout << '\n';
        }
    }
    return 0;
}
