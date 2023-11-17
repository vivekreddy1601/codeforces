//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,m,c=0;
        cin >> n >> m;
        ll a[n][m];
        for(int i= 0; i < n;i++){
            for(int j = 0; j < m;j++)
                cin >> a[i][j] ;
        }
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                ll t = 0;
                if(i-1>=0)t++;
                if(i+1<n)t++;
                if(j-1>=0)t++;
                if(j+1<n)t++;
                if(a[i][j]>t){
                    c = 1;
                    break;
                }else
                    a[i][j]=t;
            }
            if(c == 1)
                break;
        }
        if(c == 1)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(int i = 0; i < n;i++){
                for(int j = 0; j < m;j++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
