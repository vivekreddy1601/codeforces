//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,c=0;
        cin >> n;
        ll a[n],b[n+1]={0};
        for(int i = 0; i < n;i++)
            cin >> a[i];
        if(a[0]==1){
            b[0]=n+1;
            for(int i= 1;i <= n;i++)
                b[i]=i;
            c = 1;
        }else if(a[n-1]==0){
            for(int i = 0; i <= n;i++)
                b[i]=i+1;
            c=1;
        }else{
             for(int i = 0; i < n-1;i++){
                 if(a[i]==0&&a[i+1]==1){
                     for(int j = 0;j <= i;j++){
                         b[j]=j+1;
                     }
                     b[i+1]=n+1;
                     for(int j = i+2;j <=n;j++)
                        b[j]=j;
                    c = 1;
                    break;
                 }
             }
        }
        if(c==0)    
            cout << -1 << endl;
        else{
            for(int i = 0;i < n;i++)
                cout << b[i]<< " ";
            cout << b[n] << endl;
        }
    }
    return 0;
}
