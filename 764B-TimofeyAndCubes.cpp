//code by Vivek Reddy
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll n,itr=0;
    cin >> n;
    ll a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0,j=n-1;i<=j;i++,j--){
        if(itr){
            itr = 0;
        }else{
            itr = 1;
            ll t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    for(int i = 0;i < n;i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}
