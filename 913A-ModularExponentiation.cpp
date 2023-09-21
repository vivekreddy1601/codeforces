//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin >> n >> m;
    ll ans = pow(2,n);
    cout << m%ans << endl;
    return 0;
}