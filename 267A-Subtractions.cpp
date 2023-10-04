//code by Vivek Reddy  
#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll vt;
    cin >> vt;
    while(vt--){
        ll a,b,t=0;
        cin >> a >> b;
        while(a>0 && b>0){
            if(a>b){
                t+=a/b;
                a-=(a/b)*b;
            }else{
                t+=b/a;
                b-=(b/a)*a;
            }
        }
        cout << t << endl;
    }
    return 0;
}
