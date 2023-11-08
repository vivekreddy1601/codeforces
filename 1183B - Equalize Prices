//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--){
        ll n,k;
        cin >> n>> k;
        ll a[n];
        for(int i = 0; i < n;i++)
            cin >> a[i];
        sort(a,a+n);
        ll tk = a[0]+k;
        if(abs(tk-a[0])<=k && abs(tk-a[n-1])<=k)
            cout << tk << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
