//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll x,y,aa,bb;
    cin >> x >> y >> aa >> bb;
    ll a[x],b[y];
    for(int i = 0; i < x;i++)
        cin >> a[i];
    for(int i = 0; i < y;i++)
        cin >> b[i];
    if(a[aa-1]<b[y-bb])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}