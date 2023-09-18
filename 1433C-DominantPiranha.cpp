//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,m=0,ans=-1;
        cin >> n;
        ll a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i]; 
            if(a[i]>m)
                m = a[i];
        }
        for(int i = 0; i < n;i++){
            if(a[i]==m){
                if(i == 0){
                   if(a[i+1]<m){ 
                    ans = i+1;
                    break;
                   }
                }else if(i == n-1){
                    if(a[i-1]<m){
                         ans=i+1;
                         break;
                    }
                }else{
                    if(a[i+1]<m||a[i-1]<m){
                        ans = i+1;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}