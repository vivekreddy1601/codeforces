//code by Vivek Reddy  
#include <iostream>
#include <cmath>
#include <vector>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n],b[n];
    for(ll i = 0; i < n;i++)
        cin >> a[i];
    for(ll i = 0; i < n;i++)
        cin >> b[i];
    ll s1=a[0];
    ll s2=b[0];
    for(ll i = 1; i < n;i++){
        s1|=a[i];
        s2|=b[i];
    }
    cout << s1+s2 << endl;
    return 0;
}
