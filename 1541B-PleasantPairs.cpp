//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll a[n+1];
        for(ll i = 1; i <= n;i++)
            cin >> a[i];
        ll an = 0;
        for(ll i = 1; i <= n;i++){
            for(ll j = a[i]-i;j <=n;j+=a[i]){
                if(j >= 0)
                    if(a[i]*a[j]==i+j && i < j)
                        an++;
            }
        }
        cout << an << endl;
    }
}
