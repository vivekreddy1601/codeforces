//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;
 
int main()
{
      int vt;
      cin>>vt;
      while(vt--){
        ll n;
        cin>>n;
        ll res = (n-1)*n;
        for(ll i = 1; i <= n; i++){
          res = ((res%1000000007)*i)%1000000007;
        }
        cout<<res<<endl;
      }
    return 0;
}
