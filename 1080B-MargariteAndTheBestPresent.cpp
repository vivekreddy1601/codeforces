//code by Vivek Reddy  
#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int vt;
    cin >> vt;
    while(vt--){
        ll a,b;
        cin >> a >> b;
        if(a==b){
            if(a%2==0)
                cout << a << endl;
            else
                cout << -1*a << endl;
        }else if(a%2==b%2){
            if(a%2==0)
                cout << (a+b)/2 << endl;
            else
                cout << -1 * ((a+b)/2) << endl;
        }else{
            ll t;
            if(b%2==0)
                t = ceil(double(b-a)/2);
            else
                t = -1 * ceil(double(b-a)/2);
            cout << t<< endl;
        }
    }
    return 0;
}