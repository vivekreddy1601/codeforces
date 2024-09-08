//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,s=0;
    cin >> n;
    ll a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0,j=n-1;i < j;i++,j--){
        s += (a[i]+a[j]) * (a[i]+a[j]);
    }
    cout << s << '\n';
    return 0;
}
