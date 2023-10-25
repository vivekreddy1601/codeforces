//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n],s[n]={0};
    for(int i = 0; i <n;i++)
        cin >> a[i];
    for(int i = 0; i < n;i++){
        for(int j = 0;j < a[i];j++){
            ll t;
            cin >> t;
            s[i]+=(t*5);
        }
        s[i]+=(15*a[i]);
    }
    sort(s,s+n);
    cout << s[0] << endl;
    return 0;
}