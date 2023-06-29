#include <iostream>
#include <climits>
#define ll long long
using namespace std;
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll x,ma=INT_MAX,mb=INT_MAX,fa=0;
        cin >> x;
        ll a[x],b[x];
        for(int i = 0; i < x;i++){
            cin >> a[i];
            if(a[i]<ma)
                ma=a[i];
        }
        for(int i = 0; i < x;i++){
            cin >> b[i];
            if(b[i]<mb)
                mb=b[i];
        }
        for(int i = 0;i < x;i++){
            ll ad = a[i]-ma;
            ll bd = b[i]-mb;
            if(ad > 0 && bd > 0){
                int mm = min(ad,bd);
                fa+=mm;
                ad-=mm;
                bd-=mm;
            }
            if(ad>0)
                fa+=ad;
            if(bd>0)
                fa+=bd;
        }
        cout << fa << endl;
    }
    return 0;
}