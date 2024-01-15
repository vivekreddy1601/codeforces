//code by Vivek reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n+1];
        for(ll i = 1; i <= n;i++)
            cin >> a[i];
        string arr[n+1];
        for(ll i = 0; i < 53;i++){
            arr[0]= arr[0] + 'a';
        }
        for(ll i = 1; i <= n;i++){
            ll j;
            for(j=0;j < a[i];j++){
                arr[i]+=arr[i-1][j];
            }
            if(arr[i-1][j]=='b'){
                for(;j<=52;j++)
                    arr[i]+='a';
            }else{
                for(;j<=52;j++)
                    arr[i]+='b';
            }
        }
        for(ll i = 0; i <= n;i++){
            cout << arr[i] << endl;
        }
    }
    return 0;
}
