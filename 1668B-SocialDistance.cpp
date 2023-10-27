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
        ll n,m;
        cin >> n >> m;
        ll a[n];
        ll s = n;
        for(int i= 0;i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 1;i < n;i++)
            s+=a[i];
        s+=a[n-1];
        if(s>m)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
