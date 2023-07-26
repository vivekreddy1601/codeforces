//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,m,k,h,c=0;
        cin >> n>> m >> k >> h;
        ll t = (m-1)*k;
        ll a[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(abs(h-a[i])<=t && abs(h-a[i])%k==0 && abs(h-a[i])!=0){
                c++;
            }
        }
        cout << c << endl;
        
    }
    return 0;
}