//Code by Vivek Reddy
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;

int main()
{
    ll n,d,t=0;
    cin >> n >> d;
    ll a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 0,j = n-1; i < j;i++,j--){
        ll temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    ll r = n;
    for(int i = 0;i<n;i++){
        ll x = a[i];
        ll n = 1 + d/x;
        if(n <= r){
            r-=n;
            t++;
        }else
            break;
    }
    cout << t << endl;
    return 0;
}
