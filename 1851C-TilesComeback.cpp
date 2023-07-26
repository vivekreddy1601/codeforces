//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        if(a[0]==a[n-1]){
            ll x = 0;
            for(int i = 0; i < n;i++){
                if(a[i]==a[0])
                    x++;
            }
            if(x >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }else{
            ll x=0,b=0,i=0;
            for(;i <n;i++){
                if(a[i]==a[0])
                    x++;
                if(x==k)
                    break;
            }
            for(;i < n;i++){
                if(a[i]==a[n-1])
                    b++;
                if(b==k)
                    break;
            }
            if(x == k && b == k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}