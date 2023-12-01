//code by Vivek Reddy
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a = (n/7)*2;
    if(n%7==0){
        cout << a << ' ' << a << endl;
    }else{
        ll t = 0; 
        if(n%7<2)
            t =a + n%7;
        else
            t = a + 2;
        if(n%7==6)
            a++;
        cout << a << ' ' << t<< endl;
    }
    return 0;
}
