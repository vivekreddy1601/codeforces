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
        ll a[n+1][3] = {0};
        for(ll i = 1;i <= n;i++){
            for(ll j = 1;j <= 2;j++)
                cin >> a[i][j];
        }
        bool flag = true;
        for(int i = 1;i <= n;i++){
            if((a[i][1]-a[i-1][1])<(a[i][2]-a[i-1][2])){
                flag = false;
                break;
            }
            if(a[i][1]-a[i-1][1]<0){
                flag = false;
                break;
            }
            if(a[i][2]-a[i-1][2]<0){
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
