//code by Vivek Reddy
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
bool prime(ll x){
    if(x==0||x==1)
    return 0;
    for(int i = 2;i <= sqrt(x);i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        if(a-b==1 && prime(a+b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
