//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
bool square(ll x){
    if(x>=0){
        ll y = sqrt(x);
        return (x==y*y);
    }
    return false;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll n;
        cin >> n;
        if(n%2!=0){
            cout << "NO" << endl;
            continue;
        }
        ll t = n/2;
        if(square(t)){
            cout << "YES" << endl;
            continue;
        }
        if(n%4!=0){
            cout << "NO" << endl;
            continue;
        }
        ll tt = n/4;
        if(square(tt)){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}