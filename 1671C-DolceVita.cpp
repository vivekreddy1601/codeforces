//code by Vivek Reddy
#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n,x,c=0;
        cin >> n >> x;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        ll p[n]={0};
        ll s = 0;
        for(ll i = 0; i < n;i++){
            s += a[i];
            p[i]=s;
        }
        for(ll i = n-1;i>=0;i--){
            ll d = x-p[i];
            if(d >=0 && d/(i+1)>=0)
                c+=(d/(i+1))+1;
        }
        cout << c << endl;
    }
    return 0;
}
