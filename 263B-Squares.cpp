//code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    if(k > n)
        cout << "-1\n";
    else
        cout << a[k-1] << " 0 \n";
    return 0;
}
