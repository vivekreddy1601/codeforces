//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n;i++)
            cin >> a[i];
        if(a[n-2]>a[n-1])
            cout << -1 << endl;
        else{
            if(a[n-1]>=0){
                cout << n-2 << endl;
                for(int i = 0; i < n-2;i++)
                    cout << i+1 << ' ' << n-1 << ' ' << n << endl;
            }else{
                vector<ll> b = a;
                sort(b.begin(),b.end());
                if(a==b)
                    cout << 0 << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}
