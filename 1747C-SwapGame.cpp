//code by Vivek Reddy
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll n,min=INT_MAX;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n;i++){
            cin >> a[i];
            if(min>a[i])
                min = a[i];
        }
        if(a[0]==min)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
    return 0;
}
