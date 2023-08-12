//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,t=0;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(int i = 0; i < n;i++){
        cout << a[i]+t << ' ';
        t = max(t,(a[i]+t));
    }
    cout << endl;
    return 0;
}