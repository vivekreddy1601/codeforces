//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        ll size = 4*n;
        ll a[size];
        for(int i = 0;i < size;i++)
            cin >> a[i];
        sort(a,a+size);
        ll area = a[0]*a[size-1];
        bool flag = true;
        for(int i = 0; i < n;i++){
            ll l = 2 * i;
            ll r = (4 * n) - (2 * i) - 2;
            if(a[l] != a[l + 1] || a[r] != a[r + 1] || a[l] * a[r] != area){
                flag = false;
                break;
            }
        }
        if(flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
